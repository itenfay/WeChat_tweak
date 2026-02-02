//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameCenterMsgReportInfo : NSObject
{
    unsigned int _msgSubTye;
    unsigned int _interactive;
    NSString *_noticeId;
    NSString *_businessData;
    NSString *_extData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *extData; // @synthesize extData=_extData;
@property(retain, nonatomic) NSString *businessData; // @synthesize businessData=_businessData;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(nonatomic) unsigned int interactive; // @synthesize interactive=_interactive;
@property(nonatomic) unsigned int msgSubTye; // @synthesize msgSubTye=_msgSubTye;

@end

