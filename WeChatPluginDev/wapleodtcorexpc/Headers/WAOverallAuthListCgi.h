//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WAOverallAuthListCgiDelegate;

@interface WAOverallAuthListCgi
{
    unsigned int _lastUpdateTime;
    unsigned int _recordCount;
    id <WAOverallAuthListCgiDelegate> _delegate;
    NSString *_usrname;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int recordCount; // @synthesize recordCount=_recordCount;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(copy, nonatomic) NSString *usrname; // @synthesize usrname=_usrname;
@property(nonatomic) __weak id <WAOverallAuthListCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (id)mockData:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

@end

