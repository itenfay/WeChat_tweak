//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderRedDotCtrlInfo, WCFinderRedDotTipsShowInfo;

@interface FindFriendRedDotEvent : NSObject
{
    unsigned long long _type;
    NSString *_path;
    WCFinderRedDotCtrlInfo *_existControlInfo;
    WCFinderRedDotCtrlInfo *_controlInfo;
    WCFinderRedDotTipsShowInfo *_existShowInfo;
    WCFinderRedDotTipsShowInfo *_showInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *showInfo; // @synthesize showInfo=_showInfo;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *existShowInfo; // @synthesize existShowInfo=_existShowInfo;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *controlInfo; // @synthesize controlInfo=_controlInfo;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *existControlInfo; // @synthesize existControlInfo=_existControlInfo;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

