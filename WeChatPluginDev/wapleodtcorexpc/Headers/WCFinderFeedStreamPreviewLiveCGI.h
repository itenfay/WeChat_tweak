//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, WCFinderDataItem;

@interface WCFinderFeedStreamPreviewLiveCGI
{
    int _commentScene;
    WCFinderDataItem *_dataItem;
    NSString *_livePkId;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    long long _previewDelaySec;
    NSData *_multiStyleInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *multiStyleInfo; // @synthesize multiStyleInfo=_multiStyleInfo;
@property(nonatomic) long long previewDelaySec; // @synthesize previewDelaySec=_previewDelaySec;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *livePkId; // @synthesize livePkId=_livePkId;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (_Bool)shouldAutoProcessingToastWithError:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderFeedPreviewDataItem:(id)arg1 commentScene:(int)arg2 liveTaskId:(id)arg3 multiStyleInfo:(id)arg4 previewDelaySec:(long long)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

