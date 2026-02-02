//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LVMinimizeReportInfo, WCFinderSimplePlayerView;
@protocol ILVMinimizeContextModel;

@interface LVMinimizeContext : NSObject
{
    _Bool _isPlayEndReported;
    _Bool _isPlayFinished;
    id <ILVMinimizeContextModel> _viewModel;
    WCFinderSimplePlayerView *_playerView;
    LVMinimizeReportInfo *_reportInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPlayFinished; // @synthesize isPlayFinished=_isPlayFinished;
@property(nonatomic) _Bool isPlayEndReported; // @synthesize isPlayEndReported=_isPlayEndReported;
@property(retain, nonatomic) LVMinimizeReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) WCFinderSimplePlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) id <ILVMinimizeContextModel> viewModel; // @synthesize viewModel=_viewModel;
- (id)description;
- (_Bool)isFlutterPlayer;
- (id)feedId;

@end

