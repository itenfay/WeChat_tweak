//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString;

@interface WCFinderStreamCellUploadStatusView : UIView
{
    _Bool _hadEncoding;
    NSString *_tid;
    CAShapeLayer *_ovalShapeLayer;
    UIView *_progressView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hadEncoding; // @synthesize hadEncoding=_hadEncoding;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) CAShapeLayer *ovalShapeLayer; // @synthesize ovalShapeLayer=_ovalShapeLayer;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void)onFinderDataItemEncodingProgress:(double)arg1;
- (void)onFinderDataItemPostProgressWithTid:(id)arg1 progress:(id)arg2;
- (void)updateProgress:(double)arg1;
- (void)setupProgressView;
- (void)updateWithContentVM:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

