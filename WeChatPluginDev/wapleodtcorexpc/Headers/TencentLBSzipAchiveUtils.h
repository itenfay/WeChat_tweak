//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TencenLBSZipArchive;

@interface TencentLBSzipAchiveUtils : NSObject
{
    TencenLBSZipArchive *_zipAchive;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) TencenLBSZipArchive *zipAchive; // @synthesize zipAchive=_zipAchive;
- (void)ErrorMessage:(id)arg1;
- (_Bool)zipDir:(id)arg1 tozipPath:(id)arg2;
- (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

