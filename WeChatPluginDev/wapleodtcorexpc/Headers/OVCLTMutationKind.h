//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OVCLTMutationKind : NSObject
{
    NSString *_mutationKind;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *mutationKind; // @synthesize mutationKind=_mutationKind;
- (id)initWithMutationKind:(id)arg1;

@end

