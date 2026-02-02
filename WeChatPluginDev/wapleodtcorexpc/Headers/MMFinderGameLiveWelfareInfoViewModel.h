//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameWelfareInfo, NSArray, NSString;
@protocol MMFinderGameLiveWelfareInfoViewModelDelegate;

@interface MMFinderGameLiveWelfareInfoViewModel : NSObject
{
    _Bool _showView;
    _Bool _needNoRelaunch;
    unsigned long long _status;
    id <MMFinderGameLiveWelfareInfoViewModelDelegate> _delegate;
    NSArray *_welfareTaskList;
    NSString *_gameWelfareWebImageURL;
    NSString *_gameWelfareWebImageWording;
    NSString *_gameWelfareReportExtInfo;
    GameWelfareInfo *_welfareInfo;
    unsigned long long _currentServerTs;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needNoRelaunch; // @synthesize needNoRelaunch=_needNoRelaunch;
@property(nonatomic) unsigned long long currentServerTs; // @synthesize currentServerTs=_currentServerTs;
@property(retain, nonatomic) GameWelfareInfo *welfareInfo; // @synthesize welfareInfo=_welfareInfo;
@property(nonatomic, getter=isShowView) _Bool showView; // @synthesize showView=_showView;
@property(retain, nonatomic) NSString *gameWelfareReportExtInfo; // @synthesize gameWelfareReportExtInfo=_gameWelfareReportExtInfo;
@property(retain, nonatomic) NSString *gameWelfareWebImageWording; // @synthesize gameWelfareWebImageWording=_gameWelfareWebImageWording;
@property(retain, nonatomic) NSString *gameWelfareWebImageURL; // @synthesize gameWelfareWebImageURL=_gameWelfareWebImageURL;
@property(readonly, nonatomic) NSArray *welfareTaskList; // @synthesize welfareTaskList=_welfareTaskList;
@property(nonatomic) __weak id <MMFinderGameLiveWelfareInfoViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void)onAppTaskDidEnterBackground:(id)arg1 mode:(long long)arg2;
@property(readonly, nonatomic) NSString *gameWelfareId;
- (void)startGameLiveWelfareInfoTaskAnimation;
- (void)preloadGameLiveWelfareInfoDetailView;
- (void)openGameLiveWelfareInfoDetailView;
- (void)updateStatus:(id)arg1;
- (void)refreshStatus;
- (id)initWithWelfareInfo:(id)arg1;

@end

