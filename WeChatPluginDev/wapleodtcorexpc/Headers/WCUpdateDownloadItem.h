//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, ResourceMeta;

@interface WCUpdateDownloadItem : NSObject
{
    NSString *_baseID;
    NSString *_pid;
    NSString *_filePath;
    ResourceMeta *_resMeta;
    NSMutableArray *_customInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *customInfos; // @synthesize customInfos=_customInfos;
@property(retain, nonatomic) ResourceMeta *resMeta; // @synthesize resMeta=_resMeta;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *baseID; // @synthesize baseID=_baseID;

@end

