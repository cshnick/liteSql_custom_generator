#ifndef main_hpp
#define main_hpp
#include "litesql.hpp"
namespace SkypeDB {
class Messages;
class Chats;
class Messages : public litesql::Persistent {
public:
    class Own {
    public:
        static const litesql::FieldType Id;
    };
    static const std::string type__;
    static const std::string table__;
    static const std::string sequence__;
    static const litesql::FieldType Id;
    litesql::Field<int> id;
    static const litesql::FieldType Type;
    litesql::Field<std::string> type;
    static const litesql::FieldType Is_permanent;
    litesql::Field<int> is_permanent;
    static const litesql::FieldType Convo_id;
    litesql::Field<int> convo_id;
    static const litesql::FieldType Chatname;
    litesql::Field<std::string> chatname;
    static const litesql::FieldType Author;
    litesql::Field<std::string> author;
    static const litesql::FieldType From_dispname;
    litesql::Field<std::string> from_dispname;
    static const litesql::FieldType Author_was_live;
    litesql::Field<int> author_was_live;
    static const litesql::FieldType Guid;
    litesql::Field<litesql::Blob> guid;
    static const litesql::FieldType Dialog_partner;
    litesql::Field<std::string> dialog_partner;
    static const litesql::FieldType Timestamp;
    litesql::Field<int> timestamp;
    static const litesql::FieldType Sending_status;
    litesql::Field<int> sending_status;
    static const litesql::FieldType Consumption_status;
    litesql::Field<int> consumption_status;
    static const litesql::FieldType Edited_by;
    litesql::Field<std::string> edited_by;
    static const litesql::FieldType Edited_timestamp;
    litesql::Field<int> edited_timestamp;
    static const litesql::FieldType Param_key;
    litesql::Field<int> param_key;
    static const litesql::FieldType Param_value;
    litesql::Field<int> param_value;
    static const litesql::FieldType Body_xml;
    litesql::Field<std::string> body_xml;
    static const litesql::FieldType Identities;
    litesql::Field<std::string> identities;
    static const litesql::FieldType Reason;
    litesql::Field<std::string> reason;
    static const litesql::FieldType Leavereason;
    litesql::Field<int> leavereason;
    static const litesql::FieldType Participant_count;
    litesql::Field<int> participant_count;
    static const litesql::FieldType Error_code;
    litesql::Field<int> error_code;
    static const litesql::FieldType Chatmsg_type;
    litesql::Field<int> chatmsg_type;
    static const litesql::FieldType Chatmsg_status;
    litesql::Field<int> chatmsg_status;
    static const litesql::FieldType Body_is_rawxml;
    litesql::Field<int> body_is_rawxml;
    static const litesql::FieldType Oldoptions;
    litesql::Field<int> oldoptions;
    static const litesql::FieldType Newoptions;
    litesql::Field<int> newoptions;
    static const litesql::FieldType Newrole;
    litesql::Field<int> newrole;
    static const litesql::FieldType Pk_id;
    litesql::Field<int> pk_id;
    static const litesql::FieldType Crc;
    litesql::Field<int> crc;
    static const litesql::FieldType Remote_id;
    litesql::Field<int> remote_id;
    static const litesql::FieldType Call_guid;
    litesql::Field<std::string> call_guid;
    static void initValues();
protected:
    void defaults();
public:
    Messages(const litesql::Database& db);
    Messages(const litesql::Database& db, const litesql::Record& rec);
    Messages(const Messages& obj);
    const Messages& operator=(const Messages& obj);
protected:
    std::string insert(litesql::Record& tables, litesql::Records& fieldRecs, litesql::Records& valueRecs);
    void create();
    virtual void addUpdates(Updates& updates);
    virtual void addIDUpdates(Updates& updates);
public:
    static void getFieldTypes(std::vector<litesql::FieldType>& ftypes);
protected:
    virtual void delRecord();
    virtual void delRelations();
public:
    virtual void update();
    virtual void del();
    virtual bool typeIsCorrect() const;
    std::auto_ptr<Messages> upcast() const;
    std::auto_ptr<Messages> upcastCopy() const;
};
std::ostream & operator<<(std::ostream& os, Messages o);
class Chats : public litesql::Persistent {
public:
    class Own {
    public:
        static const litesql::FieldType Id;
    };
    static const std::string type__;
    static const std::string table__;
    static const std::string sequence__;
    static const litesql::FieldType Id;
    litesql::Field<int> id;
    static const litesql::FieldType Type;
    litesql::Field<std::string> type;
    static const litesql::FieldType Is_permanent;
    litesql::Field<int> is_permanent;
    static const litesql::FieldType Name;
    litesql::Field<std::string> name;
    static const litesql::FieldType Options;
    litesql::Field<int> options;
    static const litesql::FieldType Friendlyname;
    litesql::Field<std::string> friendlyname;
    static const litesql::FieldType Description;
    litesql::Field<std::string> description;
    static const litesql::FieldType Timestamp;
    litesql::Field<int> timestamp;
    static const litesql::FieldType Activity_timestamp;
    litesql::Field<int> activity_timestamp;
    static const litesql::FieldType Dialog_partner;
    litesql::Field<std::string> dialog_partner;
    static const litesql::FieldType Adder;
    litesql::Field<std::string> adder;
    static const litesql::FieldType Mystatus;
    litesql::Field<int> mystatus;
    static const litesql::FieldType Myrole;
    litesql::Field<int> myrole;
    static const litesql::FieldType Posters;
    litesql::Field<std::string> posters;
    static const litesql::FieldType Participants;
    litesql::Field<std::string> participants;
    static const litesql::FieldType Applicants;
    litesql::Field<std::string> applicants;
    static const litesql::FieldType Banned_users;
    litesql::Field<std::string> banned_users;
    static const litesql::FieldType Name_text;
    litesql::Field<std::string> name_text;
    static const litesql::FieldType Topic;
    litesql::Field<std::string> topic;
    static const litesql::FieldType Topic_xml;
    litesql::Field<std::string> topic_xml;
    static const litesql::FieldType Guidelines;
    litesql::Field<std::string> guidelines;
    static const litesql::FieldType Picture;
    litesql::Field<litesql::Blob> picture;
    static const litesql::FieldType Alertstring;
    litesql::Field<std::string> alertstring;
    static const litesql::FieldType Is_bookmarked;
    litesql::Field<int> is_bookmarked;
    static const litesql::FieldType Passwordhint;
    litesql::Field<std::string> passwordhint;
    static const litesql::FieldType Unconsumed_suppressed_msg;
    litesql::Field<int> unconsumed_suppressed_msg;
    static const litesql::FieldType Unconsumed_normal_msg;
    litesql::Field<int> unconsumed_normal_msg;
    static const litesql::FieldType Unconsumed_elevated_msg;
    litesql::Field<int> unconsumed_elevated_msg;
    static const litesql::FieldType Unconsumed_msg_voice;
    litesql::Field<int> unconsumed_msg_voice;
    static const litesql::FieldType Activemembers;
    litesql::Field<std::string> activemembers;
    static const litesql::FieldType State_data;
    litesql::Field<litesql::Blob> state_data;
    static const litesql::FieldType Lifesigns;
    litesql::Field<int> lifesigns;
    static const litesql::FieldType Last_change;
    litesql::Field<int> last_change;
    static const litesql::FieldType First_unread_message;
    litesql::Field<int> first_unread_message;
    static const litesql::FieldType Pk_type;
    litesql::Field<int> pk_type;
    static const litesql::FieldType Dbpath;
    litesql::Field<std::string> dbpath;
    static const litesql::FieldType Split_friendlyname;
    litesql::Field<std::string> split_friendlyname;
    static const litesql::FieldType Conv_dbid;
    litesql::Field<int> conv_dbid;
    static void initValues();
protected:
    void defaults();
public:
    Chats(const litesql::Database& db);
    Chats(const litesql::Database& db, const litesql::Record& rec);
    Chats(const Chats& obj);
    const Chats& operator=(const Chats& obj);
protected:
    std::string insert(litesql::Record& tables, litesql::Records& fieldRecs, litesql::Records& valueRecs);
    void create();
    virtual void addUpdates(Updates& updates);
    virtual void addIDUpdates(Updates& updates);
public:
    static void getFieldTypes(std::vector<litesql::FieldType>& ftypes);
protected:
    virtual void delRecord();
    virtual void delRelations();
public:
    virtual void update();
    virtual void del();
    virtual bool typeIsCorrect() const;
    std::auto_ptr<Chats> upcast() const;
    std::auto_ptr<Chats> upcastCopy() const;
};
std::ostream & operator<<(std::ostream& os, Chats o);
class main : public litesql::Database {
public:
    main(std::string backendType, std::string connInfo);
protected:
    virtual std::vector<litesql::Database::SchemaItem> getSchema() const;
    static void initialize();
};
}
#endif
