//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol StoreEmotionGetEmotionActivityCgiDelegate;

@interface StoreEmotionGetEmotionActivityCgi
{
    NSString *m_activityId;
    NSString *m_md5;
    id <StoreEmotionGetEmotionActivityCgiDelegate> _delegate;
    NSString *_linkId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *linkId; // @synthesize linkId=_linkId;
@property(nonatomic) __weak id <StoreEmotionGetEmotionActivityCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *md5; // @synthesize md5=m_md5;
@property(readonly, nonatomic) NSString *activityId; // @synthesize activityId=m_activityId;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)startRequestWithActivityId:(id)arg1 md5:(id)arg2 linkId:(id)arg3;
- (id)init;

@end

