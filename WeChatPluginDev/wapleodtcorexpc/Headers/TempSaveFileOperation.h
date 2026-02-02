//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSOperation.h>

@class NSString, WCTempSaveModel;

@interface TempSaveFileOperation : NSOperation
{
    WCTempSaveModel *_model;
    NSString *_filePath;
}

+ (id)operationWithModel:(id)arg1 filePath:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) WCTempSaveModel *model; // @synthesize model=_model;
- (void)main;

@end

