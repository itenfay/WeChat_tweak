//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol XMailPrepareBindCgiDelegate;

@interface XMailPrepareBindCgi
{
    id <XMailPrepareBindCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <XMailPrepareBindCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)startRequestWithDefaultMailAddr:(id)arg1;
- (id)init;

@end

