//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TXCVideoEncodeConfig;
@protocol TXCVideoEncodeReportDelegate;

@interface TXCVideoEncodeReport
{
    int _streamType;
    id <TXCVideoEncodeReportDelegate> _delegate;
    TXCVideoEncodeConfig *_config;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TXCVideoEncodeConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <TXCVideoEncodeReportDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int streamType; // @synthesize streamType=_streamType;
- (void)onProcessFrame:(id)arg1 isFirstFrame:(_Bool)arg2;
- (void)onTickLog:(long long)arg1 inDuration:(long long)arg2;
- (id)initWithDelegate:(id)arg1 streamType:(int)arg2 config:(id)arg3;

@end

