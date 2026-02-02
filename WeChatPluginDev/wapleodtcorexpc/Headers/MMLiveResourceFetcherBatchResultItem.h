//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveResourceFetcherTask;

@interface MMLiveResourceFetcherBatchResultItem : NSObject
{
    _Bool _success;
    MMLiveResourceFetcherTask *_task;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveResourceFetcherTask *task; // @synthesize task=_task;
@property(nonatomic) _Bool success; // @synthesize success=_success;

@end

