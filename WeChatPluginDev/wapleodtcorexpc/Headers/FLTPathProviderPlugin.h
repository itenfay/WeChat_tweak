//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FLTPathProviderPlugin : NSObject
{
}

+ (void)registerWithRegistrar:(id)arg1;
- (id)getTemporaryPathWithError:(id *)arg1;
- (id)getLibraryPathWithError:(id *)arg1;
- (id)getApplicationSupportPathWithError:(id *)arg1;
- (id)getApplicationDocumentsPathWithError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

