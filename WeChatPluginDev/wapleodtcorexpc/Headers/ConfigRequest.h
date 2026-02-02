//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ChildMode, LbsLocationNew, NSMutableArray, NSString;

@interface ConfigRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long businessType; // @dynamic businessType;
@property(retain, nonatomic) ChildMode *childMode; // @dynamic childMode;
@property(retain, nonatomic) NSMutableArray *configKeys; // @dynamic configKeys;
@property(retain, nonatomic) NSMutableArray *extParams; // @dynamic extParams;
@property(nonatomic) unsigned int h5Version; // @dynamic h5Version;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) LbsLocationNew *location; // @dynamic location;
@property(retain, nonatomic) NSString *netType; // @dynamic netType;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int topStoryH5Version; // @dynamic topStoryH5Version;
@property(retain, nonatomic) NSString *topStoryLiteAppVersion; // @dynamic topStoryLiteAppVersion;

@end

