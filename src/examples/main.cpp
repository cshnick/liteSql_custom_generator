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
const litesql::FieldType Chats::Own::Id("id",A_field_type_integer,"Chats");
const std::string Chats::type__("Chats");
const std::string Chats::table__("Chats");
const std::string Chats::sequence__("Chats_seq");
const litesql::FieldType Chats::Id("id",A_field_type_integer,table__);
const litesql::FieldType Chats::Type("type",A_field_type_string,table__);
const litesql::FieldType Chats::Is_permanent("is_permanent",A_field_type_integer,table__);
const litesql::FieldType Chats::Name("name",A_field_type_string,table__);
const litesql::FieldType Chats::Options("options",A_field_type_integer,table__);
const litesql::FieldType Chats::Friendlyname("friendlyname",A_field_type_string,table__);
const litesql::FieldType Chats::Description("description",A_field_type_string,table__);
const litesql::FieldType Chats::Timestamp("timestamp",A_field_type_integer,table__);
const litesql::FieldType Chats::Activity_timestamp("activity_timestamp",A_field_type_integer,table__);
const litesql::FieldType Chats::Dialog_partner("dialog_partner",A_field_type_string,table__);
const litesql::FieldType Chats::Adder("adder",A_field_type_string,table__);
const litesql::FieldType Chats::Mystatus("mystatus",A_field_type_integer,table__);
const litesql::FieldType Chats::Myrole("myrole",A_field_type_integer,table__);
const litesql::FieldType Chats::Posters("posters",A_field_type_string,table__);
const litesql::FieldType Chats::Participants("participants",A_field_type_string,table__);
const litesql::FieldType Chats::Applicants("applicants",A_field_type_string,table__);
const litesql::FieldType Chats::Banned_users("banned_users",A_field_type_string,table__);
const litesql::FieldType Chats::Name_text("name_text",A_field_type_string,table__);
const litesql::FieldType Chats::Topic("topic",A_field_type_string,table__);
const litesql::FieldType Chats::Topic_xml("topic_xml",A_field_type_string,table__);
const litesql::FieldType Chats::Guidelines("guidelines",A_field_type_string,table__);
const litesql::FieldType Chats::Picture("picture",A_field_type_blob,table__);
const litesql::FieldType Chats::Alertstring("alertstring",A_field_type_string,table__);
const litesql::FieldType Chats::Is_bookmarked("is_bookmarked",A_field_type_integer,table__);
const litesql::FieldType Chats::Passwordhint("passwordhint",A_field_type_string,table__);
const litesql::FieldType Chats::Unconsumed_suppressed_msg("unconsumed_suppressed_msg",A_field_type_integer,table__);
const litesql::FieldType Chats::Unconsumed_normal_msg("unconsumed_normal_msg",A_field_type_integer,table__);
const litesql::FieldType Chats::Unconsumed_elevated_msg("unconsumed_elevated_msg",A_field_type_integer,table__);
const litesql::FieldType Chats::Unconsumed_msg_voice("unconsumed_msg_voice",A_field_type_integer,table__);
const litesql::FieldType Chats::Activemembers("activemembers",A_field_type_string,table__);
const litesql::FieldType Chats::State_data("state_data",A_field_type_blob,table__);
const litesql::FieldType Chats::Lifesigns("lifesigns",A_field_type_integer,table__);
const litesql::FieldType Chats::Last_change("last_change",A_field_type_integer,table__);
const litesql::FieldType Chats::First_unread_message("first_unread_message",A_field_type_integer,table__);
const litesql::FieldType Chats::Pk_type("pk_type",A_field_type_integer,table__);
const litesql::FieldType Chats::Dbpath("dbpath",A_field_type_string,table__);
const litesql::FieldType Chats::Split_friendlyname("split_friendlyname",A_field_type_string,table__);
const litesql::FieldType Chats::Conv_dbid("conv_dbid",A_field_type_integer,table__);
void Chats::initValues() {
}
void Chats::defaults() {
    id = 0;
    is_permanent = 0;
    options = 0;
    timestamp = 0;
    activity_timestamp = 0;
    mystatus = 0;
    myrole = 0;
    picture = Blob();
    is_bookmarked = 0;
    unconsumed_suppressed_msg = 0;
    unconsumed_normal_msg = 0;
    unconsumed_elevated_msg = 0;
    unconsumed_msg_voice = 0;
    state_data = Blob();
    lifesigns = 0;
    last_change = 0;
    first_unread_message = 0;
    pk_type = 0;
    conv_dbid = 0;
}
Chats::Chats(const litesql::Database& db)
     : litesql::Persistent(db), id(Id), type(Type), is_permanent(Is_permanent), name(Name), options(Options), friendlyname(Friendlyname), description(Description), timestamp(Timestamp), activity_timestamp(Activity_timestamp), dialog_partner(Dialog_partner), adder(Adder), mystatus(Mystatus), myrole(Myrole), posters(Posters), participants(Participants), applicants(Applicants), banned_users(Banned_users), name_text(Name_text), topic(Topic), topic_xml(Topic_xml), guidelines(Guidelines), picture(Picture), alertstring(Alertstring), is_bookmarked(Is_bookmarked), passwordhint(Passwordhint), unconsumed_suppressed_msg(Unconsumed_suppressed_msg), unconsumed_normal_msg(Unconsumed_normal_msg), unconsumed_elevated_msg(Unconsumed_elevated_msg), unconsumed_msg_voice(Unconsumed_msg_voice), activemembers(Activemembers), state_data(State_data), lifesigns(Lifesigns), last_change(Last_change), first_unread_message(First_unread_message), pk_type(Pk_type), dbpath(Dbpath), split_friendlyname(Split_friendlyname), conv_dbid(Conv_dbid) {
    defaults();
}
Chats::Chats(const litesql::Database& db, const litesql::Record& rec)
     : litesql::Persistent(db, rec), id(Id), type(Type), is_permanent(Is_permanent), name(Name), options(Options), friendlyname(Friendlyname), description(Description), timestamp(Timestamp), activity_timestamp(Activity_timestamp), dialog_partner(Dialog_partner), adder(Adder), mystatus(Mystatus), myrole(Myrole), posters(Posters), participants(Participants), applicants(Applicants), banned_users(Banned_users), name_text(Name_text), topic(Topic), topic_xml(Topic_xml), guidelines(Guidelines), picture(Picture), alertstring(Alertstring), is_bookmarked(Is_bookmarked), passwordhint(Passwordhint), unconsumed_suppressed_msg(Unconsumed_suppressed_msg), unconsumed_normal_msg(Unconsumed_normal_msg), unconsumed_elevated_msg(Unconsumed_elevated_msg), unconsumed_msg_voice(Unconsumed_msg_voice), activemembers(Activemembers), state_data(State_data), lifesigns(Lifesigns), last_change(Last_change), first_unread_message(First_unread_message), pk_type(Pk_type), dbpath(Dbpath), split_friendlyname(Split_friendlyname), conv_dbid(Conv_dbid) {
    defaults();
    size_t size = (rec.size() > 38) ? 38 : rec.size();
    switch(size) {
    case 38: conv_dbid = convert<const std::string&, int>(rec[37]);
        conv_dbid.setModified(false);
    case 37: split_friendlyname = convert<const std::string&, std::string>(rec[36]);
        split_friendlyname.setModified(false);
    case 36: dbpath = convert<const std::string&, std::string>(rec[35]);
        dbpath.setModified(false);
    case 35: pk_type = convert<const std::string&, int>(rec[34]);
        pk_type.setModified(false);
    case 34: first_unread_message = convert<const std::string&, int>(rec[33]);
        first_unread_message.setModified(false);
    case 33: last_change = convert<const std::string&, int>(rec[32]);
        last_change.setModified(false);
    case 32: lifesigns = convert<const std::string&, int>(rec[31]);
        lifesigns.setModified(false);
    case 31: state_data = convert<const std::string&, litesql::Blob>(rec[30]);
        state_data.setModified(false);
    case 30: activemembers = convert<const std::string&, std::string>(rec[29]);
        activemembers.setModified(false);
    case 29: unconsumed_msg_voice = convert<const std::string&, int>(rec[28]);
        unconsumed_msg_voice.setModified(false);
    case 28: unconsumed_elevated_msg = convert<const std::string&, int>(rec[27]);
        unconsumed_elevated_msg.setModified(false);
    case 27: unconsumed_normal_msg = convert<const std::string&, int>(rec[26]);
        unconsumed_normal_msg.setModified(false);
    case 26: unconsumed_suppressed_msg = convert<const std::string&, int>(rec[25]);
        unconsumed_suppressed_msg.setModified(false);
    case 25: passwordhint = convert<const std::string&, std::string>(rec[24]);
        passwordhint.setModified(false);
    case 24: is_bookmarked = convert<const std::string&, int>(rec[23]);
        is_bookmarked.setModified(false);
    case 23: alertstring = convert<const std::string&, std::string>(rec[22]);
        alertstring.setModified(false);
    case 22: picture = convert<const std::string&, litesql::Blob>(rec[21]);
        picture.setModified(false);
    case 21: guidelines = convert<const std::string&, std::string>(rec[20]);
        guidelines.setModified(false);
    case 20: topic_xml = convert<const std::string&, std::string>(rec[19]);
        topic_xml.setModified(false);
    case 19: topic = convert<const std::string&, std::string>(rec[18]);
        topic.setModified(false);
    case 18: name_text = convert<const std::string&, std::string>(rec[17]);
        name_text.setModified(false);
    case 17: banned_users = convert<const std::string&, std::string>(rec[16]);
        banned_users.setModified(false);
    case 16: applicants = convert<const std::string&, std::string>(rec[15]);
        applicants.setModified(false);
    case 15: participants = convert<const std::string&, std::string>(rec[14]);
        participants.setModified(false);
    case 14: posters = convert<const std::string&, std::string>(rec[13]);
        posters.setModified(false);
    case 13: myrole = convert<const std::string&, int>(rec[12]);
        myrole.setModified(false);
    case 12: mystatus = convert<const std::string&, int>(rec[11]);
        mystatus.setModified(false);
    case 11: adder = convert<const std::string&, std::string>(rec[10]);
        adder.setModified(false);
    case 10: dialog_partner = convert<const std::string&, std::string>(rec[9]);
        dialog_partner.setModified(false);
    case 9: activity_timestamp = convert<const std::string&, int>(rec[8]);
        activity_timestamp.setModified(false);
    case 8: timestamp = convert<const std::string&, int>(rec[7]);
        timestamp.setModified(false);
    case 7: description = convert<const std::string&, std::string>(rec[6]);
        description.setModified(false);
    case 6: friendlyname = convert<const std::string&, std::string>(rec[5]);
        friendlyname.setModified(false);
    case 5: options = convert<const std::string&, int>(rec[4]);
        options.setModified(false);
    case 4: name = convert<const std::string&, std::string>(rec[3]);
        name.setModified(false);
    case 3: is_permanent = convert<const std::string&, int>(rec[2]);
        is_permanent.setModified(false);
    case 2: type = convert<const std::string&, std::string>(rec[1]);
        type.setModified(false);
    case 1: id = convert<const std::string&, int>(rec[0]);
        id.setModified(false);
    }
}
Chats::Chats(const Chats& obj)
     : litesql::Persistent(obj), id(obj.id), type(obj.type), is_permanent(obj.is_permanent), name(obj.name), options(obj.options), friendlyname(obj.friendlyname), description(obj.description), timestamp(obj.timestamp), activity_timestamp(obj.activity_timestamp), dialog_partner(obj.dialog_partner), adder(obj.adder), mystatus(obj.mystatus), myrole(obj.myrole), posters(obj.posters), participants(obj.participants), applicants(obj.applicants), banned_users(obj.banned_users), name_text(obj.name_text), topic(obj.topic), topic_xml(obj.topic_xml), guidelines(obj.guidelines), picture(obj.picture), alertstring(obj.alertstring), is_bookmarked(obj.is_bookmarked), passwordhint(obj.passwordhint), unconsumed_suppressed_msg(obj.unconsumed_suppressed_msg), unconsumed_normal_msg(obj.unconsumed_normal_msg), unconsumed_elevated_msg(obj.unconsumed_elevated_msg), unconsumed_msg_voice(obj.unconsumed_msg_voice), activemembers(obj.activemembers), state_data(obj.state_data), lifesigns(obj.lifesigns), last_change(obj.last_change), first_unread_message(obj.first_unread_message), pk_type(obj.pk_type), dbpath(obj.dbpath), split_friendlyname(obj.split_friendlyname), conv_dbid(obj.conv_dbid) {
}
const Chats& Chats::operator=(const Chats& obj) {
    if (this != &obj) {
        id = obj.id;
        type = obj.type;
        is_permanent = obj.is_permanent;
        name = obj.name;
        options = obj.options;
        friendlyname = obj.friendlyname;
        description = obj.description;
        timestamp = obj.timestamp;
        activity_timestamp = obj.activity_timestamp;
        dialog_partner = obj.dialog_partner;
        adder = obj.adder;
        mystatus = obj.mystatus;
        myrole = obj.myrole;
        posters = obj.posters;
        participants = obj.participants;
        applicants = obj.applicants;
        banned_users = obj.banned_users;
        name_text = obj.name_text;
        topic = obj.topic;
        topic_xml = obj.topic_xml;
        guidelines = obj.guidelines;
        picture = obj.picture;
        alertstring = obj.alertstring;
        is_bookmarked = obj.is_bookmarked;
        passwordhint = obj.passwordhint;
        unconsumed_suppressed_msg = obj.unconsumed_suppressed_msg;
        unconsumed_normal_msg = obj.unconsumed_normal_msg;
        unconsumed_elevated_msg = obj.unconsumed_elevated_msg;
        unconsumed_msg_voice = obj.unconsumed_msg_voice;
        activemembers = obj.activemembers;
        state_data = obj.state_data;
        lifesigns = obj.lifesigns;
        last_change = obj.last_change;
        first_unread_message = obj.first_unread_message;
        pk_type = obj.pk_type;
        dbpath = obj.dbpath;
        split_friendlyname = obj.split_friendlyname;
        conv_dbid = obj.conv_dbid;
    }
    litesql::Persistent::operator=(obj);
    return *this;
}
std::string Chats::insert(litesql::Record& tables, litesql::Records& fieldRecs, litesql::Records& valueRecs) {
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
    fields.push_back(name.name());
    values.push_back(name);
    name.setModified(false);
    fields.push_back(options.name());
    values.push_back(options);
    options.setModified(false);
    fields.push_back(friendlyname.name());
    values.push_back(friendlyname);
    friendlyname.setModified(false);
    fields.push_back(description.name());
    values.push_back(description);
    description.setModified(false);
    fields.push_back(timestamp.name());
    values.push_back(timestamp);
    timestamp.setModified(false);
    fields.push_back(activity_timestamp.name());
    values.push_back(activity_timestamp);
    activity_timestamp.setModified(false);
    fields.push_back(dialog_partner.name());
    values.push_back(dialog_partner);
    dialog_partner.setModified(false);
    fields.push_back(adder.name());
    values.push_back(adder);
    adder.setModified(false);
    fields.push_back(mystatus.name());
    values.push_back(mystatus);
    mystatus.setModified(false);
    fields.push_back(myrole.name());
    values.push_back(myrole);
    myrole.setModified(false);
    fields.push_back(posters.name());
    values.push_back(posters);
    posters.setModified(false);
    fields.push_back(participants.name());
    values.push_back(participants);
    participants.setModified(false);
    fields.push_back(applicants.name());
    values.push_back(applicants);
    applicants.setModified(false);
    fields.push_back(banned_users.name());
    values.push_back(banned_users);
    banned_users.setModified(false);
    fields.push_back(name_text.name());
    values.push_back(name_text);
    name_text.setModified(false);
    fields.push_back(topic.name());
    values.push_back(topic);
    topic.setModified(false);
    fields.push_back(topic_xml.name());
    values.push_back(topic_xml);
    topic_xml.setModified(false);
    fields.push_back(guidelines.name());
    values.push_back(guidelines);
    guidelines.setModified(false);
    fields.push_back(picture.name());
    values.push_back(picture);
    picture.setModified(false);
    fields.push_back(alertstring.name());
    values.push_back(alertstring);
    alertstring.setModified(false);
    fields.push_back(is_bookmarked.name());
    values.push_back(is_bookmarked);
    is_bookmarked.setModified(false);
    fields.push_back(passwordhint.name());
    values.push_back(passwordhint);
    passwordhint.setModified(false);
    fields.push_back(unconsumed_suppressed_msg.name());
    values.push_back(unconsumed_suppressed_msg);
    unconsumed_suppressed_msg.setModified(false);
    fields.push_back(unconsumed_normal_msg.name());
    values.push_back(unconsumed_normal_msg);
    unconsumed_normal_msg.setModified(false);
    fields.push_back(unconsumed_elevated_msg.name());
    values.push_back(unconsumed_elevated_msg);
    unconsumed_elevated_msg.setModified(false);
    fields.push_back(unconsumed_msg_voice.name());
    values.push_back(unconsumed_msg_voice);
    unconsumed_msg_voice.setModified(false);
    fields.push_back(activemembers.name());
    values.push_back(activemembers);
    activemembers.setModified(false);
    fields.push_back(state_data.name());
    values.push_back(state_data);
    state_data.setModified(false);
    fields.push_back(lifesigns.name());
    values.push_back(lifesigns);
    lifesigns.setModified(false);
    fields.push_back(last_change.name());
    values.push_back(last_change);
    last_change.setModified(false);
    fields.push_back(first_unread_message.name());
    values.push_back(first_unread_message);
    first_unread_message.setModified(false);
    fields.push_back(pk_type.name());
    values.push_back(pk_type);
    pk_type.setModified(false);
    fields.push_back(dbpath.name());
    values.push_back(dbpath);
    dbpath.setModified(false);
    fields.push_back(split_friendlyname.name());
    values.push_back(split_friendlyname);
    split_friendlyname.setModified(false);
    fields.push_back(conv_dbid.name());
    values.push_back(conv_dbid);
    conv_dbid.setModified(false);
    fieldRecs.push_back(fields);
    valueRecs.push_back(values);
    return litesql::Persistent::insert(tables, fieldRecs, valueRecs, sequence__);
}
void Chats::create() {
    litesql::Record tables;
    litesql::Records fieldRecs;
    litesql::Records valueRecs;
    type = type__;
    std::string newID = insert(tables, fieldRecs, valueRecs);
    if (id == 0)
        id = newID;
}
void Chats::addUpdates(Updates& updates) {
    prepareUpdate(updates, table__);
    updateField(updates, table__, id);
    updateField(updates, table__, type);
    updateField(updates, table__, is_permanent);
    updateField(updates, table__, name);
    updateField(updates, table__, options);
    updateField(updates, table__, friendlyname);
    updateField(updates, table__, description);
    updateField(updates, table__, timestamp);
    updateField(updates, table__, activity_timestamp);
    updateField(updates, table__, dialog_partner);
    updateField(updates, table__, adder);
    updateField(updates, table__, mystatus);
    updateField(updates, table__, myrole);
    updateField(updates, table__, posters);
    updateField(updates, table__, participants);
    updateField(updates, table__, applicants);
    updateField(updates, table__, banned_users);
    updateField(updates, table__, name_text);
    updateField(updates, table__, topic);
    updateField(updates, table__, topic_xml);
    updateField(updates, table__, guidelines);
    updateField(updates, table__, picture);
    updateField(updates, table__, alertstring);
    updateField(updates, table__, is_bookmarked);
    updateField(updates, table__, passwordhint);
    updateField(updates, table__, unconsumed_suppressed_msg);
    updateField(updates, table__, unconsumed_normal_msg);
    updateField(updates, table__, unconsumed_elevated_msg);
    updateField(updates, table__, unconsumed_msg_voice);
    updateField(updates, table__, activemembers);
    updateField(updates, table__, state_data);
    updateField(updates, table__, lifesigns);
    updateField(updates, table__, last_change);
    updateField(updates, table__, first_unread_message);
    updateField(updates, table__, pk_type);
    updateField(updates, table__, dbpath);
    updateField(updates, table__, split_friendlyname);
    updateField(updates, table__, conv_dbid);
}
void Chats::addIDUpdates(Updates& updates) {
}
void Chats::getFieldTypes(std::vector<litesql::FieldType>& ftypes) {
    ftypes.push_back(Id);
    ftypes.push_back(Type);
    ftypes.push_back(Is_permanent);
    ftypes.push_back(Name);
    ftypes.push_back(Options);
    ftypes.push_back(Friendlyname);
    ftypes.push_back(Description);
    ftypes.push_back(Timestamp);
    ftypes.push_back(Activity_timestamp);
    ftypes.push_back(Dialog_partner);
    ftypes.push_back(Adder);
    ftypes.push_back(Mystatus);
    ftypes.push_back(Myrole);
    ftypes.push_back(Posters);
    ftypes.push_back(Participants);
    ftypes.push_back(Applicants);
    ftypes.push_back(Banned_users);
    ftypes.push_back(Name_text);
    ftypes.push_back(Topic);
    ftypes.push_back(Topic_xml);
    ftypes.push_back(Guidelines);
    ftypes.push_back(Picture);
    ftypes.push_back(Alertstring);
    ftypes.push_back(Is_bookmarked);
    ftypes.push_back(Passwordhint);
    ftypes.push_back(Unconsumed_suppressed_msg);
    ftypes.push_back(Unconsumed_normal_msg);
    ftypes.push_back(Unconsumed_elevated_msg);
    ftypes.push_back(Unconsumed_msg_voice);
    ftypes.push_back(Activemembers);
    ftypes.push_back(State_data);
    ftypes.push_back(Lifesigns);
    ftypes.push_back(Last_change);
    ftypes.push_back(First_unread_message);
    ftypes.push_back(Pk_type);
    ftypes.push_back(Dbpath);
    ftypes.push_back(Split_friendlyname);
    ftypes.push_back(Conv_dbid);
}
void Chats::delRecord() {
    deleteFromTable(table__, id);
}
void Chats::delRelations() {
}
void Chats::update() {
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
void Chats::del() {
    if (!typeIsCorrect()) {
        std::auto_ptr<Chats> p(upcastCopy());
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
bool Chats::typeIsCorrect() const {
    return type == type__;
}
std::auto_ptr<Chats> Chats::upcast() const {
    return auto_ptr<Chats>(new Chats(*this));
}
std::auto_ptr<Chats> Chats::upcastCopy() const {
    Chats* np = new Chats(*this);
    np->id = id;
    np->type = type;
    np->is_permanent = is_permanent;
    np->name = name;
    np->options = options;
    np->friendlyname = friendlyname;
    np->description = description;
    np->timestamp = timestamp;
    np->activity_timestamp = activity_timestamp;
    np->dialog_partner = dialog_partner;
    np->adder = adder;
    np->mystatus = mystatus;
    np->myrole = myrole;
    np->posters = posters;
    np->participants = participants;
    np->applicants = applicants;
    np->banned_users = banned_users;
    np->name_text = name_text;
    np->topic = topic;
    np->topic_xml = topic_xml;
    np->guidelines = guidelines;
    np->picture = picture;
    np->alertstring = alertstring;
    np->is_bookmarked = is_bookmarked;
    np->passwordhint = passwordhint;
    np->unconsumed_suppressed_msg = unconsumed_suppressed_msg;
    np->unconsumed_normal_msg = unconsumed_normal_msg;
    np->unconsumed_elevated_msg = unconsumed_elevated_msg;
    np->unconsumed_msg_voice = unconsumed_msg_voice;
    np->activemembers = activemembers;
    np->state_data = state_data;
    np->lifesigns = lifesigns;
    np->last_change = last_change;
    np->first_unread_message = first_unread_message;
    np->pk_type = pk_type;
    np->dbpath = dbpath;
    np->split_friendlyname = split_friendlyname;
    np->conv_dbid = conv_dbid;
    np->inDatabase = inDatabase;
    return auto_ptr<Chats>(np);
}
std::ostream & operator<<(std::ostream& os, Chats o) {
    os << "-------------------------------------" << std::endl;
    os << o.id.name() << " = " << o.id << std::endl;
    os << o.type.name() << " = " << o.type << std::endl;
    os << o.is_permanent.name() << " = " << o.is_permanent << std::endl;
    os << o.name.name() << " = " << o.name << std::endl;
    os << o.options.name() << " = " << o.options << std::endl;
    os << o.friendlyname.name() << " = " << o.friendlyname << std::endl;
    os << o.description.name() << " = " << o.description << std::endl;
    os << o.timestamp.name() << " = " << o.timestamp << std::endl;
    os << o.activity_timestamp.name() << " = " << o.activity_timestamp << std::endl;
    os << o.dialog_partner.name() << " = " << o.dialog_partner << std::endl;
    os << o.adder.name() << " = " << o.adder << std::endl;
    os << o.mystatus.name() << " = " << o.mystatus << std::endl;
    os << o.myrole.name() << " = " << o.myrole << std::endl;
    os << o.posters.name() << " = " << o.posters << std::endl;
    os << o.participants.name() << " = " << o.participants << std::endl;
    os << o.applicants.name() << " = " << o.applicants << std::endl;
    os << o.banned_users.name() << " = " << o.banned_users << std::endl;
    os << o.name_text.name() << " = " << o.name_text << std::endl;
    os << o.topic.name() << " = " << o.topic << std::endl;
    os << o.topic_xml.name() << " = " << o.topic_xml << std::endl;
    os << o.guidelines.name() << " = " << o.guidelines << std::endl;
    os << o.picture.name() << " = " << o.picture << std::endl;
    os << o.alertstring.name() << " = " << o.alertstring << std::endl;
    os << o.is_bookmarked.name() << " = " << o.is_bookmarked << std::endl;
    os << o.passwordhint.name() << " = " << o.passwordhint << std::endl;
    os << o.unconsumed_suppressed_msg.name() << " = " << o.unconsumed_suppressed_msg << std::endl;
    os << o.unconsumed_normal_msg.name() << " = " << o.unconsumed_normal_msg << std::endl;
    os << o.unconsumed_elevated_msg.name() << " = " << o.unconsumed_elevated_msg << std::endl;
    os << o.unconsumed_msg_voice.name() << " = " << o.unconsumed_msg_voice << std::endl;
    os << o.activemembers.name() << " = " << o.activemembers << std::endl;
    os << o.state_data.name() << " = " << o.state_data << std::endl;
    os << o.lifesigns.name() << " = " << o.lifesigns << std::endl;
    os << o.last_change.name() << " = " << o.last_change << std::endl;
    os << o.first_unread_message.name() << " = " << o.first_unread_message << std::endl;
    os << o.pk_type.name() << " = " << o.pk_type << std::endl;
    os << o.dbpath.name() << " = " << o.dbpath << std::endl;
    os << o.split_friendlyname.name() << " = " << o.split_friendlyname << std::endl;
    os << o.conv_dbid.name() << " = " << o.conv_dbid << std::endl;
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
        res.push_back(Database::SchemaItem("Chats_seq","sequence",backend->getCreateSequenceSQL("Chats_seq")));
    }
    res.push_back(Database::SchemaItem("Messages","table","CREATE TABLE Messages (id " + rowIdType + ",type " + backend->getSQLType(A_field_type_string,"") + "" +",is_permanent " + backend->getSQLType(A_field_type_integer,"") + "" +",convo_id " + backend->getSQLType(A_field_type_integer,"") + "" +",chatname " + backend->getSQLType(A_field_type_string,"") + "" +",author " + backend->getSQLType(A_field_type_string,"") + "" +",from_dispname " + backend->getSQLType(A_field_type_string,"") + "" +",author_was_live " + backend->getSQLType(A_field_type_integer,"") + "" +",guid " + backend->getSQLType(A_field_type_blob,"") + "" +",dialog_partner " + backend->getSQLType(A_field_type_string,"") + "" +",timestamp " + backend->getSQLType(A_field_type_integer,"") + "" +",sending_status " + backend->getSQLType(A_field_type_integer,"") + "" +",consumption_status " + backend->getSQLType(A_field_type_integer,"") + "" +",edited_by " + backend->getSQLType(A_field_type_string,"") + "" +",edited_timestamp " + backend->getSQLType(A_field_type_integer,"") + "" +",param_key " + backend->getSQLType(A_field_type_integer,"") + "" +",param_value " + backend->getSQLType(A_field_type_integer,"") + "" +",body_xml " + backend->getSQLType(A_field_type_string,"") + "" +",identities " + backend->getSQLType(A_field_type_string,"") + "" +",reason " + backend->getSQLType(A_field_type_string,"") + "" +",leavereason " + backend->getSQLType(A_field_type_integer,"") + "" +",participant_count " + backend->getSQLType(A_field_type_integer,"") + "" +",error_code " + backend->getSQLType(A_field_type_integer,"") + "" +",chatmsg_type " + backend->getSQLType(A_field_type_integer,"") + "" +",chatmsg_status " + backend->getSQLType(A_field_type_integer,"") + "" +",body_is_rawxml " + backend->getSQLType(A_field_type_integer,"") + "" +",oldoptions " + backend->getSQLType(A_field_type_integer,"") + "" +",newoptions " + backend->getSQLType(A_field_type_integer,"") + "" +",newrole " + backend->getSQLType(A_field_type_integer,"") + "" +",pk_id " + backend->getSQLType(A_field_type_integer,"") + "" +",crc " + backend->getSQLType(A_field_type_integer,"") + "" +",remote_id " + backend->getSQLType(A_field_type_integer,"") + "" +",call_guid " + backend->getSQLType(A_field_type_string,"") + "" +")"));
    res.push_back(Database::SchemaItem("Chats","table","CREATE TABLE Chats (id " + rowIdType + ",type " + backend->getSQLType(A_field_type_string,"") + "" +",is_permanent " + backend->getSQLType(A_field_type_integer,"") + "" +",name " + backend->getSQLType(A_field_type_string,"") + "" +",options " + backend->getSQLType(A_field_type_integer,"") + "" +",friendlyname " + backend->getSQLType(A_field_type_string,"") + "" +",description " + backend->getSQLType(A_field_type_string,"") + "" +",timestamp " + backend->getSQLType(A_field_type_integer,"") + "" +",activity_timestamp " + backend->getSQLType(A_field_type_integer,"") + "" +",dialog_partner " + backend->getSQLType(A_field_type_string,"") + "" +",adder " + backend->getSQLType(A_field_type_string,"") + "" +",mystatus " + backend->getSQLType(A_field_type_integer,"") + "" +",myrole " + backend->getSQLType(A_field_type_integer,"") + "" +",posters " + backend->getSQLType(A_field_type_string,"") + "" +",participants " + backend->getSQLType(A_field_type_string,"") + "" +",applicants " + backend->getSQLType(A_field_type_string,"") + "" +",banned_users " + backend->getSQLType(A_field_type_string,"") + "" +",name_text " + backend->getSQLType(A_field_type_string,"") + "" +",topic " + backend->getSQLType(A_field_type_string,"") + "" +",topic_xml " + backend->getSQLType(A_field_type_string,"") + "" +",guidelines " + backend->getSQLType(A_field_type_string,"") + "" +",picture " + backend->getSQLType(A_field_type_blob,"") + "" +",alertstring " + backend->getSQLType(A_field_type_string,"") + "" +",is_bookmarked " + backend->getSQLType(A_field_type_integer,"") + "" +",passwordhint " + backend->getSQLType(A_field_type_string,"") + "" +",unconsumed_suppressed_msg " + backend->getSQLType(A_field_type_integer,"") + "" +",unconsumed_normal_msg " + backend->getSQLType(A_field_type_integer,"") + "" +",unconsumed_elevated_msg " + backend->getSQLType(A_field_type_integer,"") + "" +",unconsumed_msg_voice " + backend->getSQLType(A_field_type_integer,"") + "" +",activemembers " + backend->getSQLType(A_field_type_string,"") + "" +",state_data " + backend->getSQLType(A_field_type_blob,"") + "" +",lifesigns " + backend->getSQLType(A_field_type_integer,"") + "" +",last_change " + backend->getSQLType(A_field_type_integer,"") + "" +",first_unread_message " + backend->getSQLType(A_field_type_integer,"") + "" +",pk_type " + backend->getSQLType(A_field_type_integer,"") + "" +",dbpath " + backend->getSQLType(A_field_type_string,"") + "" +",split_friendlyname " + backend->getSQLType(A_field_type_string,"") + "" +",conv_dbid " + backend->getSQLType(A_field_type_integer,"") + "" +")"));
    res.push_back(Database::SchemaItem("Messagesididx","index","CREATE INDEX Messagesididx ON Messages (id)"));
    res.push_back(Database::SchemaItem("Chatsididx","index","CREATE INDEX Chatsididx ON Chats (id)"));
    return res;
}
void main::initialize() {
    static bool initialized = false;
    if (initialized)
        return;
    initialized = true;
}
}
