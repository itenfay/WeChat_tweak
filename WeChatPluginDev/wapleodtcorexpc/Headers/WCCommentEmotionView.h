//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, MMUIButton, NSString, SnsEmojiInfoObj, UIImageView;
@protocol WCCommentEmotionViewDelegate;

@interface WCCommentEmotionView : UIView
{
    _Bool _isStatic;
    double _maxLength;
    SnsEmojiInfoObj *_snsEmojiInfoObj;
    id <WCCommentEmotionViewDelegate> _delegate;
    UIImageView *_emoctionView;
    MMUIActivityIndicatorView *_loadingView;
    MMUIButton *_failRetryBtn;
}

+ (double)getEmoctionScaleFor:(double)arg1 maxLength:(double)arg2;
+ (struct CGSize)getEmoctionViewShowSize:(struct CGSize)arg1 maxLength:(double)arg2;
+ (struct CGSize)getEmojiSize:(id)arg1 maxLength:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *failRetryBtn; // @synthesize failRetryBtn=_failRetryBtn;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *emoctionView; // @synthesize emoctionView=_emoctionView;
@property(nonatomic) __weak id <WCCommentEmotionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SnsEmojiInfoObj *snsEmojiInfoObj; // @synthesize snsEmojiInfoObj=_snsEmojiInfoObj;
@property(nonatomic) _Bool isStatic; // @synthesize isStatic=_isStatic;
@property(nonatomic) double maxLength; // @synthesize maxLength=_maxLength;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)startDownloadEmoticon;
- (void)showEmotionWithData:(id)arg1 md5:(id)arg2;
- (void)onRetryDownLoad;
- (void)hideDownloadFailView;
- (void)showDownloadFailView;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)addEmoctionView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

