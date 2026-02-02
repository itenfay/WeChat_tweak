//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CIContext;

@interface TAVContextManager : NSObject
{
    CIContext *_CIContext;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) CIContext *CIContext; // @synthesize CIContext=_CIContext;
- (id)init;

@end

