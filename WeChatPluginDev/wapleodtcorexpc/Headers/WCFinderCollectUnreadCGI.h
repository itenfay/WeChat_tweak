//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WCFinderCollectUnreadCGI
{
    int _commentScene;
    NSMutableArray *_unreadItems;
}

+ (_Bool)shouldAutoProcessingToastWithErrorCode:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSMutableArray *unreadItems; // @synthesize unreadItems=_unreadItems;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderUnreadItems:(id)arg1 commentScene:(int)arg2;

@end

