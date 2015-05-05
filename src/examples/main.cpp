#include "main.hpp"
namespace SkypeDB {
using namespace litesql;
const litesql::FieldType Messages::Own::Id("id",A_field_type_integer,"Messages");
const std::string Messages::type__("Messages");
const std::string Messages::table__("Messages");
const std::string Messages::sequence__("Messages_seq");
const litesql::FieldType Messages::Id("id",A_field_type_integer,table__);
const litesql::FieldType Messages::Type("type",A_field_type_string,table__);
const litesql::FieldType Messages::Is_permanent("is_permanent",A_field_type_integer,table__);
const litesql::FieldType Messages::Convo_id("convo_id",A_field_type_integer,table__);
const litesql::FieldType Messages::Chatname("chatname",A_field_type_string,table__);
const litesql::FieldType Messages::Author("author",A_field_type_string,table__);
const litesql::FieldType Messages::From_dispname("from_dispname",A_field_type_string,table__);
const litesql::FieldType Messages::Author_was_live("author_was_live",A_field_type_integer,table__);
const litesql::FieldType Messages::Guid("guid",A_field_type_blob,table__);
const litesql::FieldType Messages::Dialog_partner("dialog_partner",A_field_type_string,table__);
const litesql::FieldType Messages::Timestamp("timestamp",A_field_type_integer,table__);
const litesql::FieldType Messages::Sending_status("sending_status",A_field_type_integer,table__);
const litesql::FieldType Messages::Consumption_status("consumption_status",A_field_type_integer,table__);
const litesql::FieldType Messages::Edited_by("edited_by",A_field_type_string,table__);
const litesql::FieldType Messages::Edited_timestamp("edited_timestamp",A_field_type_integer,table__);
const litesql::FieldType Messages::Param_key("param_key",A_field_type_integer,table__);
const litesql::FieldType Messages::Param_value("param_value",A_field_type_integer,table__);
const litesql::FieldType Messages::Body_xml("body_xml",A_field_type_string,table__);
const litesql::FieldType Messages::Identities("identities",A_field_type_string,table__);
const litesql::FieldType Messages::Reason("reason",A_field_type_string,table__);
const litesql::FieldType Messages::Leavereason("leavereason",A_field_type_integer,table__);
const litesql::FieldType Messages::Participant_count("participant_count",A_field_type_integer,table__);
const litesql::FieldType Messages::Error_code("error_code",A_field_type_integer,table__);
const litesql::FieldType Messages::Chatmsg_type("chatmsg_type",A_field_type_integer,table__);
const litesql::FieldType Messages::Chatmsg_status("chatmsg_status",A_field_type_integer,table__);
const litesql::FieldType Messages::Body_is_rawxml("body_is_rawxml",A_field_type_integer,table__);
const litesql::FieldType Messages::Oldoptions("oldoptions",A_field_type_integer,table__);
const litesql::FieldType Messages::Newoptions("newoptions",A_field_type_integer,table__);
const litesql::FieldType Messages::Newrole("newrole",A_field_type_integer,table__);
const litesql::FieldType Messages::Pk_id("pk_id",A_field_type_integer,table__);
const litesql::FieldType Messages::Crc("crc",A_field_type_integer,table__);
const litesql::FieldType Messages::Remote_id("remote_id",A_field_type_integer,table__);
const litesql::FieldType Messages::Call_guid("call_guid",A_field_type_string,table__);
void Messages::initValues() {
}
void Messages::defaults() {
    id = 0;
    is_permanent = 0;
    convo_id = 0;
    author_was_live = 0;
    guid = Blob();
    timestamp = 0;
    sending_status = 0;
    consumption_status = 0;
    edited_timestamp = 0;
    param_key = 0;
    param_value = 0;
    leavereason = 0;
    participant_count = 0;
    error_code = 0;
    chatmsg_type = 0;
    chatmsg_status = 0;
    body_is_rawxml = 0;
    oldoptions = 0;
    newoptions = 0;
    newrole = 0;
    pk_id = 0;
    crc = 0;
    remote_id = 0;
}
Messages::Messages(const litesql::Database& db)
     : litesql::Persistent(db), id(Id), type(Type), is_permanent(Is_permanent), convo_id(Convo_id), chatname(Chatname), author(Author), from_dispname(From_dispname), author_was_live(Author_was_live), guid(Guid), dialog_partner(Dialog_partner), timestamp(Timestamp), sending_status(Sending_status), consumption_status(Consumption_status), edited_by(Edited_by), edited_timestamp(Edited_timestamp), param_key(Param_key), param_value(Param_value), body_xml(Body_xml), identities(Identities), reason(Reason), leavereason(Leavereason), participant_count(Participant_count), error_code(Error_code), chatmsg_type(Chatmsg_type), chatmsg_status(Chatmsg_status), body_is_rawxml(Body_is_rawxml), oldoptions(Oldoptions), newoptions(Newoptions), newrole(Newrole), pk_id(Pk_id), crc(Crc), remote_id(Remote_id), call_guid(Call_guid) {
    defaults();
}
Messages::Messages(const litesql::Database& db, const litesql::Record& rec)
     : litesql::Persistent(db, rec), id(Id), type(Type), is_permanent(Is_permanent), convo_id(Convo_id), chatname(Chatname), author(Author), from_dispname(From_dispname), author_was_live(Author_was_live), guid(Guid), dialog_partner(Dialog_partner), timestamp(Timestamp), sending_status(Sending_status), consumption_status(Consumption_status), edited_by(Edited_by), edited_timestamp(Edited_timestamp), param_key(Param_key), param_value(Param_value), body_xml(Body_xml), identities(Identities), reason(Reason), leavereason(Leavereason), participant_count(Participant_count), error_code(Error_code), chatmsg_type(Chatmsg_type), chatmsg_status(Chatmsg_status), body_is_rawxml(Body_is_rawxml), oldoptions(Oldoptions), newoptions(Newoptions), newrole(Newrole), pk_id(Pk_id), crc(Crc), remote_id(Remote_id), call_guid(Call_guid) {
    defaults();
    size_t size = (rec.size() > 33) ? 33 : rec.size();
    switch(size) {
    case 33: call_guid = convert<const std::string&, std::string>(rec[32]);
        call_guid.setModified(false);
    case 32: remote_id = convert<const std::string&, int>(rec[31]);
        remote_id.setModified(false);
    case 31: crc = convert<const std::string&, int>(rec[30]);
        crc.setModified(false);
    case 30: pk_id = convert<const std::string&, int>(rec[29]);
        pk_id.setModified(false);
    case 29: newrole = convert<const std::string&, int>(rec[28]);
        newrole.setModified(false);
    case 28: newoptions = convert<const std::string&, int>(rec[27]);
        newoptions.setModified(false);
    case 27: oldoptions = convert<const std::string&, int>(rec[26]);
        oldoptions.setModified(false);
    case 26: body_is_rawxml = convert<const std::string&, int>(rec[25]);
        body_is_rawxml.setModified(false);
    case 25: chatmsg_status = convert<const std::string&, int>(rec[24]);
        chatmsg_status.setModified(false);
    case 24: chatmsg_type = convert<const std::string&, int>(rec[23]);
        chatmsg_type.setModified(false);
    case 23: error_code = convert<const std::string&, int>(rec[22]);
        error_code.setModified(false);
    case 22: participant_count = convert<const std::string&, int>(rec[21]);
        participant_count.setModified(false);
    case 21: leavereason = convert<const std::string&, int>(rec[20]);
        leavereason.setModified(false);
    case 20: reason = convert<const std::string&, std::string>(rec[19]);
        reason.setModified(false);
    case 19: identities = convert<const std::string&, std::string>(rec[18]);
        identities.setModified(false);
    case 18: body_xml = convert<const std::string&, std::string>(rec[17]);
        body_xml.setModified(false);
    case 17: param_value = convert<const std::string&, int>(rec[16]);
        param_value.setModified(false);
    case 16: param_key = convert<const std::string&, int>(rec[15]);
        param_key.setModified(false);
    case 15: edited_timestamp = convert<const std::string&, int>(rec[14]);
        edited_timestamp.setModified(false);
    case 14: edited_by = convert<const std::string&, std::string>(rec[13]);
        edited_by.setModified(false);
    case 13: consumption_status = convert<const std::string&, int>(rec[12]);
        consumption_status.setModified(false);
    case 12: sending_status = convert<const std::string&, int>(rec[11]);
        sending_status.setModified(false);
    case 11: timestamp = convert<const std::string&, int>(rec[10]);
        timestamp.setModified(false);
    case 10: dialog_partner = convert<const std::string&, std::string>(rec[9]);
        dialog_partner.setModified(false);
    case 9: guid = convert<const std::string&, litesql::Blob>(rec[8]);
        guid.setModified(false);
    case 8: author_was_live = convert<const std::string&, int>(rec[7]);
        author_was_live.setModified(false);
    case 7: from_dispname = convert<const std::string&, std::string>(rec[6]);
        from_dispname.setModified(false);
    case 6: author = convert<const std::string&, std::string>(rec[5]);
        author.setModified(false);
    case 5: chatname = convert<const std::string&, std::string>(rec[4]);
        chatname.setModified(false);
    case 4: convo_id = convert<const std::string&, int>(rec[3]);
        convo_id.setModified(false);
    case 3: is_permanent = convert<const std::string&, int>(rec[2]);
        is_permanent.setModified(false);
    case 2: type = convert<const std::string&, std::string>(rec[1]);
        type.setModified(false);
    case 1: id = convert<const std::string&, int>(rec[0]);
        id.setModified(false);
    }
}
Messages::Messages(const Messages& obj)
     : litesql::Persistent(obj), id(obj.id), type(obj.type), is_permanent(obj.is_permanent), convo_id(obj.convo_id), chatname(obj.chatname), author(obj.author), from_dispname(obj.from_dispname), author_was_live(obj.author_was_live), guid(obj.guid), dialog_partner(obj.dialog_partner), timestamp(obj.timestamp), sending_status(obj.sending_status), consumption_status(obj.consumption_status), edited_by(obj.edited_by), edited_timestamp(obj.edited_timestamp), param_key(obj.param_key), param_value(obj.param_value), body_xml(obj.body_xml), identities(obj.identities), reason(obj.reason), leavereason(obj.leavereason), participant_count(obj.participant_count), error_code(obj.error_code), chatmsg_type(obj.chatmsg_type), chatmsg_status(obj.chatmsg_status), body_is_rawxml(obj.body_is_rawxml), oldoptions(obj.oldoptions), newoptions(obj.newoptions), newrole(obj.newrole), pk_id(obj.pk_id), crc(obj.crc), remote_id(obj.remote_id), call_guid(obj.call_guid) {
}
const Messages& Messages::operator=(const Messages& obj) {
    if (this != &obj) {
        id = obj.id;
        type = obj.type;
        is_permanent = obj.is_permanent;
        convo_id = obj.convo_id;
        chatname = obj.chatname;
        author = obj.author;
        from_dispname = obj.from_dispname;
        author_was_live = obj.author_was_live;
        guid = obj.guid;
        dialog_partner = obj.dialog_partner;
        timestamp = obj.timestamp;
        sending_status = obj.sending_status;
        consumption_status = obj.consumption_status;
        edited_by = obj.edited_by;
        edited_timestamp = obj.edited_timestamp;
        param_key = obj.param_key;
        param_value = obj.param_value;
        body_xml = obj.body_xml;
        identities = obj.identities;
        reason = obj.reason;
        leavereason = obj.leavereason;
        participant_count = obj.participant_count;
        error_code = obj.error_code;
        chatmsg_type = obj.chatmsg_type;
        chatmsg_status = obj.chatmsg_status;
        body_is_rawxml = obj.body_is_rawxml;
        oldoptions = obj.oldoptions;
        newoptions = obj.newoptions;
        newrole = obj.newrole;
        pk_id = obj.pk_id;
        crc = obj.crc;
        remote_id = obj.remote_id;
        call_guid = obj.call_guid;
    }
    litesql::Persistent::operator=(obj);
    return *this;
}
std::string Messages::insert(litesql::Record& tables, litesql::Records& fieldRecs, litesql::Records& valueRecs) {
    tables.push_back(table__);
    litesql::Record fields;
    litesql::Record values;
    fields.push_back(id.name());
    values.push_back(id);
    id.setModified(false);
    fields.push_back(type.name());
    values.push_back(type);
    type.setModified(false);
    fields.push_back(is_permanent.name());
    values.push_back(is_permanent);
    is_permanent.setModified(false);
    fields.push_back(convo_id.name());
    values.push_back(convo_id);
    convo_id.setModified(false);
    fields.push_back(chatname.name());
    values.push_back(chatname);
    chatname.setModified(false);
    fields.push_back(author.name());
    values.push_back(author);
    author.setModified(false);
    fields.push_back(from_dispname.name());
    values.push_back(from_dispname);
    from_dispname.setModified(false);
    fields.push_back(author_was_live.name());
    values.push_back(author_was_live);
    author_was_live.setModified(false);
    fields.push_back(guid.name());
    values.push_back(guid);
    guid.setModified(false);
    fields.push_back(dialog_partner.name());
    values.push_back(dialog_partner);
    dialog_partner.setModified(false);
    fields.push_back(timestamp.name());
    values.push_back(timestamp);
    timestamp.setModified(false);
    fields.push_back(sending_status.name());
    values.push_back(sending_status);
    sending_status.setModified(false);
    fields.push_back(consumption_status.name());
    values.push_back(consumption_status);
    consumption_status.setModified(false);
    fields.push_back(edited_by.name());
    values.push_back(edited_by);
    edited_by.setModified(false);
    fields.push_back(edited_timestamp.name());
    values.push_back(edited_timestamp);
    edited_timestamp.setModified(false);
    fields.push_back(param_key.name());
    values.push_back(param_key);
    param_key.setModified(false);
    fields.push_back(param_value.name());
    values.push_back(param_value);
    param_value.setModified(false);
    fields.push_back(body_xml.name());
    values.push_back(body_xml);
    body_xml.setModified(false);
    fields.push_back(identities.name());
    values.push_back(identities);
    identities.setModified(false);
    fields.push_back(reason.name());
    values.push_back(reason);
    reason.setModified(false);
    fields.push_back(leavereason.name());
    values.push_back(leavereason);
    leavereason.setModified(false);
    fields.push_back(participant_count.name());
    values.push_back(participant_count);
    participant_count.setModified(false);
    fields.push_back(error_code.name());
    values.push_back(error_code);
    error_code.setModified(false);
    fields.push_back(chatmsg_type.name());
    values.push_back(chatmsg_type);
    chatmsg_type.setModified(false);
    fields.push_back(chatmsg_status.name());
    values.push_back(chatmsg_status);
    chatmsg_status.setModified(false);
    fields.push_back(body_is_rawxml.name());
    values.push_back(body_is_rawxml);
    body_is_rawxml.setModified(false);
    fields.push_back(oldoptions.name());
    values.push_back(oldoptions);
    oldoptions.setModified(false);
    fields.push_back(newoptions.name());
    values.push_back(newoptions);
    newoptions.setModified(false);
    fields.push_back(newrole.name());
    values.push_back(newrole);
    newrole.setModified(false);
    fields.push_back(pk_id.name());
    values.push_back(pk_id);
    pk_id.setModified(false);
    fields.push_back(crc.name());
    values.push_back(crc);
    crc.setModified(false);
    fields.push_back(remote_id.name());
    values.push_back(remote_id);
    remote_id.setModified(false);
    fields.push_back(call_guid.name());
    values.push_back(call_guid);
    call_guid.setModified(false);
    fieldRecs.push_back(fields);
    valueRecs.push_back(values);
    return litesql::Persistent::insert(tables, fieldRecs, valueRecs, sequence__);
}
void Messages::create() {
    litesql::Record tables;
    litesql::Records fieldRecs;
    litesql::Records valueRecs;
    type = type__;
    std::string newID = insert(tables, fieldRecs, valueRecs);
    if (id == 0)
        id = newID;
}
void Messages::addUpdates(Updates& updates) {
    prepareUpdate(updates, table__);
    updateField(updates, table__, id);
    updateField(updates, table__, type);
    updateField(updates, table__, is_permanent);
    updateField(updates, table__, convo_id);
    updateField(updates, table__, chatname);
    updateField(updates, table__, author);
    updateField(updates, table__, from_dispname);
    updateField(updates, table__, author_was_live);
    updateField(updates, table__, guid);
    updateField(updates, table__, dialog_partner);
    updateField(updates, table__, timestamp);
    updateField(updates, table__, sending_status);
    updateField(updates, table__, consumption_status);
    updateField(updates, table__, edited_by);
    updateField(updates, table__, edited_timestamp);
    updateField(updates, table__, param_key);
    updateField(updates, table__, param_value);
    updateField(updates, table__, body_xml);
    updateField(updates, table__, identities);
    updateField(updates, table__, reason);
    updateField(updates, table__, leavereason);
    updateField(updates, table__, participant_count);
    updateField(updates, table__, error_code);
    updateField(updates, table__, chatmsg_type);
    updateField(updates, table__, chatmsg_status);
    updateField(updates, table__, body_is_rawxml);
    updateField(updates, table__, oldoptions);
    updateField(updates, table__, newoptions);
    updateField(updates, table__, newrole);
    updateField(updates, table__, pk_id);
    updateField(updates, table__, crc);
    updateField(updates, table__, remote_id);
    updateField(updates, table__, call_guid);
}
void Messages::addIDUpdates(Updates& updates) {
}
void Messages::getFieldTypes(std::vector<litesql::FieldType>& ftypes) {
    ftypes.push_back(Id);
    ftypes.push_back(Type);
    ftypes.push_back(Is_permanent);
    ftypes.push_back(Convo_id);
    ftypes.push_back(Chatname);
    ftypes.push_back(Author);
    ftypes.push_back(From_dispname);
    ftypes.push_back(Author_was_live);
    ftypes.push_back(Guid);
    ftypes.push_back(Dialog_partner);
    ftypes.push_back(Timestamp);
    ftypes.push_back(Sending_status);
    ftypes.push_back(Consumption_status);
    ftypes.push_back(Edited_by);
    ftypes.push_back(Edited_timestamp);
    ftypes.push_back(Param_key);
    ftypes.push_back(Param_value);
    ftypes.push_back(Body_xml);
    ftypes.push_back(Identities);
    ftypes.push_back(Reason);
    ftypes.push_back(Leavereason);
    ftypes.push_back(Participant_count);
    ftypes.push_back(Error_code);
    ftypes.push_back(Chatmsg_type);
    ftypes.push_back(Chatmsg_status);
    ftypes.push_back(Body_is_rawxml);
    ftypes.push_back(Oldoptions);
    ftypes.push_back(Newoptions);
    ftypes.push_back(Newrole);
    ftypes.push_back(Pk_id);
    ftypes.push_back(Crc);
    ftypes.push_back(Remote_id);
    ftypes.push_back(Call_guid);
}
void Messages::delRecord() {
    deleteFromTable(table__, id);
}
void Messages::delRelations() {
}
void Messages::update() {
    if (!inDatabase) {
        create();
        return;
    }
    Updates updates;
    addUpdates(updates);
    if (id != oldKey) {
        if (!typeIsCorrect()) 
            upcastCopy()->addIDUpdates(updates);
    }
    litesql::Persistent::update(updates);
    oldKey = id;
}
void Messages::del() {
    if (!typeIsCorrect()) {
        std::auto_ptr<Messages> p(upcastCopy());
        p->delRelations();
        p->onDelete();
        p->delRecord();
    } else {
        delRelations();
        onDelete();
        delRecord();
    }
    inDatabase = false;
}
bool Messages::typeIsCorrect() const {
    return type == type__;
}
std::auto_ptr<Messages> Messages::upcast() const {
    return auto_ptr<Messages>(new Messages(*this));
}
std::auto_ptr<Messages> Messages::upcastCopy() const {
    Messages* np = new Messages(*this);
    np->id = id;
    np->type = type;
    np->is_permanent = is_permanent;
    np->convo_id = convo_id;
    np->chatname = chatname;
    np->author = author;
    np->from_dispname = from_dispname;
    np->author_was_live = author_was_live;
    np->guid = guid;
    np->dialog_partner = dialog_partner;
    np->timestamp = timestamp;
    np->sending_status = sending_status;
    np->consumption_status = consumption_status;
    np->edited_by = edited_by;
    np->edited_timestamp = edited_timestamp;
    np->param_key = param_key;
    np->param_value = param_value;
    np->body_xml = body_xml;
    np->identities = identities;
    np->reason = reason;
    np->leavereason = leavereason;
    np->participant_count = participant_count;
    np->error_code = error_code;
    np->chatmsg_type = chatmsg_type;
    np->chatmsg_status = chatmsg_status;
    np->body_is_rawxml = body_is_rawxml;
    np->oldoptions = oldoptions;
    np->newoptions = newoptions;
    np->newrole = newrole;
    np->pk_id = pk_id;
    np->crc = crc;
    np->remote_id = remote_id;
    np->call_guid = call_guid;
    np->inDatabase = inDatabase;
    return auto_ptr<Messages>(np);
}
std::ostream & operator<<(std::ostream& os, Messages o) {
    os << "-------------------------------------" << std::endl;
    os << o.id.name() << " = " << o.id << std::endl;
    os << o.type.name() << " = " << o.type << std::endl;
    os << o.is_permanent.name() << " = " << o.is_permanent << std::endl;
    os << o.convo_id.name() << " = " << o.convo_id << std::endl;
    os << o.chatname.name() << " = " << o.chatname << std::endl;
    os << o.author.name() << " = " << o.author << std::endl;
    os << o.from_dispname.name() << " = " << o.from_dispname << std::endl;
    os << o.author_was_live.name() << " = " << o.author_was_live << std::endl;
    os << o.guid.name() << " = " << o.guid << std::endl;
    os << o.dialog_partner.name() << " = " << o.dialog_partner << std::endl;
    os << o.timestamp.name() << " = " << o.timestamp << std::endl;
    os << o.sending_status.name() << " = " << o.sending_status << std::endl;
    os << o.consumption_status.name() << " = " << o.consumption_status << std::endl;
    os << o.edited_by.name() << " = " << o.edited_by << std::endl;
    os << o.edited_timestamp.name() << " = " << o.edited_timestamp << std::endl;
    os << o.param_key.name() << " = " << o.param_key << std::endl;
    os << o.param_value.name() << " = " << o.param_value << std::endl;
    os << o.body_xml.name() << " = " << o.body_xml << std::endl;
    os << o.identities.name() << " = " << o.identities << std::endl;
    os << o.reason.name() << " = " << o.reason << std::endl;
    os << o.leavereason.name() << " = " << o.leavereason << std::endl;
    os << o.participant_count.name() << " = " << o.participant_count << std::endl;
    os << o.error_code.name() << " = " << o.error_code << std::endl;
    os << o.chatmsg_type.name() << " = " << o.chatmsg_type << std::endl;
    os << o.chatmsg_status.name() << " = " << o.chatmsg_status << std::endl;
    os << o.body_is_rawxml.name() << " = " << o.body_is_rawxml << std::endl;
    os << o.oldoptions.name() << " = " << o.oldoptions << std::endl;
    os << o.newoptions.name() << " = " << o.newoptions << std::endl;
    os << o.newrole.name() << " = " << o.newrole << std::endl;
    os << o.pk_id.name() << " = " << o.pk_id << std::endl;
    os << o.crc.name() << " = " << o.crc << std::endl;
    os << o.remote_id.name() << " = " << o.remote_id << std::endl;
    os << o.call_guid.name() << " = " << o.call_guid << std::endl;
    os << "-------------------------------------" << std::endl;
    return os;
}
main::main(std::string backendType, std::string connInfo)
     : litesql::Database(backendType, connInfo) {
    initialize();
}
std::vector<litesql::Database::SchemaItem> main::getSchema() const {
    vector<Database::SchemaItem> res;
    string TEXT = backend->getSQLType(A_field_type_string);
    string rowIdType = backend->getRowIDType();
    res.push_back(Database::SchemaItem("schema_","table","CREATE TABLE schema_ (name_ "+TEXT+", type_ "+TEXT+", sql_ "+TEXT+")"));
    if (backend->supportsSequences()) {
        res.push_back(Database::SchemaItem("Messages_seq","sequence",backend->getCreateSequenceSQL("Messages_seq")));
    }
    res.push_back(Database::SchemaItem("Messages","table","CREATE TABLE Messages (id " + rowIdType + ",type " + backend->getSQLType(A_field_type_string,"") + "" +",is_permanent " + backend->getSQLType(A_field_type_integer,"") + "" +",convo_id " + backend->getSQLType(A_field_type_integer,"") + "" +",chatname " + backend->getSQLType(A_field_type_string,"") + "" +",author " + backend->getSQLType(A_field_type_string,"") + "" +",from_dispname " + backend->getSQLType(A_field_type_string,"") + "" +",author_was_live " + backend->getSQLType(A_field_type_integer,"") + "" +",guid " + backend->getSQLType(A_field_type_blob,"") + "" +",dialog_partner " + backend->getSQLType(A_field_type_string,"") + "" +",timestamp " + backend->getSQLType(A_field_type_integer,"") + "" +",sending_status " + backend->getSQLType(A_field_type_integer,"") + "" +",consumption_status " + backend->getSQLType(A_field_type_integer,"") + "" +",edited_by " + backend->getSQLType(A_field_type_string,"") + "" +",edited_timestamp " + backend->getSQLType(A_field_type_integer,"") + "" +",param_key " + backend->getSQLType(A_field_type_integer,"") + "" +",param_value " + backend->getSQLType(A_field_type_integer,"") + "" +",body_xml " + backend->getSQLType(A_field_type_string,"") + "" +",identities " + backend->getSQLType(A_field_type_string,"") + "" +",reason " + backend->getSQLType(A_field_type_string,"") + "" +",leavereason " + backend->getSQLType(A_field_type_integer,"") + "" +",participant_count " + backend->getSQLType(A_field_type_integer,"") + "" +",error_code " + backend->getSQLType(A_field_type_integer,"") + "" +",chatmsg_type " + backend->getSQLType(A_field_type_integer,"") + "" +",chatmsg_status " + backend->getSQLType(A_field_type_integer,"") + "" +",body_is_rawxml " + backend->getSQLType(A_field_type_integer,"") + "" +",oldoptions " + backend->getSQLType(A_field_type_integer,"") + "" +",newoptions " + backend->getSQLType(A_field_type_integer,"") + "" +",newrole " + backend->getSQLType(A_field_type_integer,"") + "" +",pk_id " + backend->getSQLType(A_field_type_integer,"") + "" +",crc " + backend->getSQLType(A_field_type_integer,"") + "" +",remote_id " + backend->getSQLType(A_field_type_integer,"") + "" +",call_guid " + backend->getSQLType(A_field_type_string,"") + "" +")"));
    res.push_back(Database::SchemaItem("Messagesididx","index","CREATE INDEX Messagesididx ON Messages (id)"));
    return res;
}
void main::initialize() {
    static bool initialized = false;
    if (initialized)
        return;
    initialized = true;
}
}
