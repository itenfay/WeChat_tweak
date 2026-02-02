//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderEncashPrepareInfo, NSString;

@interface LiveFetchMoneyVCRealNameAuthParams : NSObject
{
    _Bool _needRefreshPage;
    unsigned int _businessId;
    NSString *_token;
    FinderEncashPrepareInfo *_targetEncashPrepareInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderEncashPrepareInfo *targetEncashPrepareInfo; // @synthesize targetEncashPrepareInfo=_targetEncashPrepareInfo;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) _Bool needRefreshPage; // @synthesize needRefreshPage=_needRefreshPage;
@property(nonatomic) unsigned int businessId; // @synthesize businessId=_businessId;

@end

