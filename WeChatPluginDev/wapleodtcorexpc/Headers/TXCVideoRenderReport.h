//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol TXCVideoRenderReportDelegate;

@interface TXCVideoRenderReport
{
    _Bool _isRenderedInView;
    id <TXCVideoRenderReportDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRenderedInView; // @synthesize isRenderedInView=_isRenderedInView;
@property(nonatomic) __weak id <TXCVideoRenderReportDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onProcessFrame:(id)arg1 isFirstFrame:(_Bool)arg2;
- (void)onTickLog:(long long)arg1 inDuration:(long long)arg2;
- (void)resetRenderStateInView;
- (void)reset;
- (id)initWithDelegate:(id)arg1;

@end

