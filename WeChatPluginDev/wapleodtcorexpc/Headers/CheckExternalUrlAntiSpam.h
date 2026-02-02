//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface CheckExternalUrlAntiSpam : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *antispamButton; // @dynamic antispamButton;
@property(nonatomic) unsigned int antispamCode; // @dynamic antispamCode;
@property(retain, nonatomic) NSString *antispamContent; // @dynamic antispamContent;
@property(retain, nonatomic) NSString *antispamTitle; // @dynamic antispamTitle;
@property(nonatomic) unsigned int antispamType; // @dynamic antispamType;

@end

