//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OpenApiParameter, WCFinderJumpInfo;
@protocol OpenApiFinderBizDelegate;

@interface FinderBlockViewController
{
    id <OpenApiFinderBizDelegate> _delegate;
    OpenApiParameter *_parameter;
    NSString *_openUrl;
    WCFinderJumpInfo *_jumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
@property(retain, nonatomic) OpenApiParameter *parameter; // @synthesize parameter=_parameter;
@property(nonatomic) __weak id <OpenApiFinderBizDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didNeedRefreshTokenWithResult:(id)arg1;
- (void)onReturn;
- (void)configJumpInfoWithParameter:(id)arg1;
- (void)doAuthWithUrl:(id)arg1;
- (void)viewDidLoad;
- (id)initWithInfoData:(id)arg1 andOpenUrl:(id)arg2 jumpInfo:(id)arg3;
- (id)initWithInfoData:(id)arg1 andOpenUrl:(id)arg2;

@end

