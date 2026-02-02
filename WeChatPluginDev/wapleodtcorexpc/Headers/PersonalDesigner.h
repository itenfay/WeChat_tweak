//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface PersonalDesigner : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)getOldRedireUrlFromXMLStr:(id)arg1;
+ (_Bool)containseFinderUserNameForXMLStr:(id)arg1;
+ (id)genFromXMLStr:(id)arg1;
- (id)debugDescription;
- (id)displayIconUrl;
- (id)displayName;
- (_Bool)shouldUpdateWith:(id)arg1;
- (id)strDesignerUin;
- (_Bool)isValid;

// Remaining properties
@property(retain, nonatomic) NSString *designerDescription; // @dynamic designerDescription;
@property(nonatomic) unsigned int designerUin; // @dynamic designerUin;
@property(retain, nonatomic) NSString *finderHeadimgUrl; // @dynamic finderHeadimgUrl;
@property(retain, nonatomic) NSString *finderNickname; // @dynamic finderNickname;
@property(retain, nonatomic) NSString *finderUserName; // @dynamic finderUserName;
@property(retain, nonatomic) NSString *headUrl; // @dynamic headUrl;
@property(retain, nonatomic) NSString *name; // @dynamic name;

@end

