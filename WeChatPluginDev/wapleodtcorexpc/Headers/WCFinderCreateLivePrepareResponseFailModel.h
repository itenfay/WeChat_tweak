//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, NSString;

@interface WCFinderCreateLivePrepareResponseFailModel : NSObject
{
    long long _errCode;
    NSString *_errMsg;
    FinderJumpInfo *_applyEligibilityJumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderJumpInfo *applyEligibilityJumpInfo; // @synthesize applyEligibilityJumpInfo=_applyEligibilityJumpInfo;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) long long errCode; // @synthesize errCode=_errCode;

@end

