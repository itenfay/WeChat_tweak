//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OpenLiteAppInfo;

@interface WCFinderLiteAppViewManager : NSObject
{
    OpenLiteAppInfo *_openLiteAppInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OpenLiteAppInfo *openLiteAppInfo; // @synthesize openLiteAppInfo=_openLiteAppInfo;
- (double)displayHeight;
- (id)displayView;

@end

