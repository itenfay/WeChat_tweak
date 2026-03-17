//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCCoverPostReporter : NSObject
{
    long long _contentSource;
}

+ (id)attachedReporterFromObject:(id)arg1;
@property(nonatomic) long long contentSource; // @synthesize contentSource=_contentSource;
- (void)attachReporterToObject:(id)arg1;
- (void)clearContext;
- (void)reportWithUploadTask:(id)arg1;

@end

