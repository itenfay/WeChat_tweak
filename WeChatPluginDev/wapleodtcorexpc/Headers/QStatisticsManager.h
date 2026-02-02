//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface QStatisticsManager : NSObject
{
    _Bool _hasUploaded;
    NSString *_filePath;
    NSMutableArray *_sendQueue;
}

+ (void)uploadIsInternal:(int)arg1;
+ (id)manager;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasUploaded; // @synthesize hasUploaded=_hasUploaded;
@property(retain, nonatomic) NSMutableArray *sendQueue; // @synthesize sendQueue=_sendQueue;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)upLoadSensitiveInfo;
- (void)addToSendingQueue:(id)arg1;
- (void)send;
- (void)saveToFile;
- (void)save;
- (void)load;
- (id)init;

@end

