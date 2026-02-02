//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol EmoticonTextAntiSpamCgiDelegate;

@interface EmoticonTextAntiSpamCgi
{
    _Bool m_shouldBlock;
    NSString *_text;
    id <EmoticonTextAntiSpamCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EmoticonTextAntiSpamCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) _Bool shouldBlock; // @synthesize shouldBlock=m_shouldBlock;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)startRequest;
- (id)init;

@end

