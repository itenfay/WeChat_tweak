//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMDeleteFileModel : NSObject
{
    _Bool _bUpload;
    NSString *_rtxName;
    NSString *_fileDescription;
    NSArray *_filePaths;
}

+ (_Bool)checkDeleteFileModelValid:(id)arg1;
+ (id)generateDeleteFileModelFromIPXX:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_bUpload;
+ (void)PBArrayAdd_filePaths;
+ (void)PBArrayAdd_fileDescription;
+ (void)PBArrayAdd_rtxName;
- (void).cxx_destruct;
@property(nonatomic) _Bool bUpload; // @synthesize bUpload=_bUpload;
@property(retain, nonatomic) NSArray *filePaths; // @synthesize filePaths=_filePaths;
@property(retain, nonatomic) NSString *fileDescription; // @synthesize fileDescription=_fileDescription;
@property(retain, nonatomic) NSString *rtxName; // @synthesize rtxName=_rtxName;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

