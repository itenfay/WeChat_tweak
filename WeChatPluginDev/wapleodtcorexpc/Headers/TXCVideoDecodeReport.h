//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol TXCVideoDecodeReportDelegate;

@interface TXCVideoDecodeReport
{
    id <TXCVideoDecodeReportDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TXCVideoDecodeReportDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onProcessFrame:(id)arg1 isFirstFrame:(_Bool)arg2;
- (void)onTickLog:(long long)arg1 inDuration:(long long)arg2;
- (id)initWithDelegate:(id)arg1;

@end

