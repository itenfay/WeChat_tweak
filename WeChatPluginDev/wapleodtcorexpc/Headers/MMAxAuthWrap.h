//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMAxAuthLogic, MMMultiHostAuthInfo;

@interface MMAxAuthWrap : NSObject
{
    MMMultiHostAuthInfo *_authInfo;
    MMAxAuthLogic *_axAuthLogic;
}

- (void).cxx_destruct;
@property(retain) MMAxAuthLogic *axAuthLogic; // @synthesize axAuthLogic=_axAuthLogic;
@property(retain) MMMultiHostAuthInfo *authInfo; // @synthesize authInfo=_authInfo;

@end

