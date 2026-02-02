//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderRealNameVerifyPrepareInfo, NSString;

@interface WCFinderRealNameVerifySuccessModel : NSObject
{
    _Bool _needFaceVerify;
    FinderRealNameVerifyPrepareInfo *_prepareInfo;
    NSString *_verifyUrl;
    NSString *_faceVerifyUrl;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needFaceVerify; // @synthesize needFaceVerify=_needFaceVerify;
@property(retain, nonatomic) NSString *faceVerifyUrl; // @synthesize faceVerifyUrl=_faceVerifyUrl;
@property(retain, nonatomic) NSString *verifyUrl; // @synthesize verifyUrl=_verifyUrl;
@property(retain, nonatomic) FinderRealNameVerifyPrepareInfo *prepareInfo; // @synthesize prepareInfo=_prepareInfo;

@end

