//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMFinderLiveKTVSongItem, MMFinderLiveTask, MMFinderLiveTaskId, MMUIActivityIndicatorView, MMUIButton, MMUILabel, MMWebImageView, NSString, UIView, WCFinderLiveAnchorLogReporter;

@interface MMFinderLiveKTVSongTableViewCell : UITableViewCell
{
    _Bool _banOriginAuthorText;
    CDUnknownBlockType _songOperationBlock;
    MMFinderLiveTaskId *_taskId;
    WCFinderLiveAnchorLogReporter *_anchorReporter;
    MMFinderLiveKTVSongItem *_songItem;
    NSString *_greenText;
    MMWebImageView *_coverImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_musicAnchorLabel;
    MMUILabel *_durationLabel;
    MMUIButton *_requestButton;
    MMUIActivityIndicatorView *_loadingView;
    UIView *_bottomLine;
}

+ (id)identifier;
+ (double)cellHeightWithState:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMUIButton *requestButton; // @synthesize requestButton=_requestButton;
@property(retain, nonatomic) MMUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) MMUILabel *musicAnchorLabel; // @synthesize musicAnchorLabel=_musicAnchorLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) _Bool banOriginAuthorText; // @synthesize banOriginAuthorText=_banOriginAuthorText;
@property(retain, nonatomic) NSString *greenText; // @synthesize greenText=_greenText;
@property(retain, nonatomic) MMFinderLiveKTVSongItem *songItem; // @synthesize songItem=_songItem;
@property(retain, nonatomic) WCFinderLiveAnchorLogReporter *anchorReporter; // @synthesize anchorReporter=_anchorReporter;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType songOperationBlock; // @synthesize songOperationBlock=_songOperationBlock;
- (void)onRequestSongItemReturned:(id)arg1 success:(_Bool)arg2;
- (void)requestButtonAction;
- (id)parseDuration:(int)arg1;
- (void)markGreen:(id)arg1 needAppend:(_Bool)arg2 onLabel:(id)arg3;
- (void)processGreenText;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)willAppear:(unsigned long long)arg1;
- (void)customLayoutUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

