//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderGeneralJumpToastExtConfig, NSMutableArray, NSString;

@interface FinderGeneralJumpToastConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *buttons; // @dynamic buttons;
@property(retain, nonatomic) NSString *cancel; // @dynamic cancel;
@property(retain, nonatomic) NSString *confirm; // @dynamic confirm;
@property(retain, nonatomic) FinderGeneralJumpToastExtConfig *extConfig; // @dynamic extConfig;
@property(retain, nonatomic) NSString *msg; // @dynamic msg;

@end

