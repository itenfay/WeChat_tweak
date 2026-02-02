//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderVideoDragProgressReporter : NSObject
{
    _Bool _isPcr90;
    _Bool _isPause;
    _Bool _isDrag;
    int _commentScene;
    double _timePointBeforeDpb;
    double _timePointAfterDpb;
    long long _screenType;
    NSString *_feedId;
    double _videoDurationTime;
    unsigned long long _dragStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long dragStyle; // @synthesize dragStyle=_dragStyle;
@property(nonatomic) double videoDurationTime; // @synthesize videoDurationTime=_videoDurationTime;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) _Bool isDrag; // @synthesize isDrag=_isDrag;
@property(nonatomic) long long screenType; // @synthesize screenType=_screenType;
@property(nonatomic) double timePointAfterDpb; // @synthesize timePointAfterDpb=_timePointAfterDpb;
@property(nonatomic) double timePointBeforeDpb; // @synthesize timePointBeforeDpb=_timePointBeforeDpb;
@property(nonatomic) _Bool isPause; // @synthesize isPause=_isPause;
@property(nonatomic) _Bool isPcr90; // @synthesize isPcr90=_isPcr90;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
- (void)report;

@end

