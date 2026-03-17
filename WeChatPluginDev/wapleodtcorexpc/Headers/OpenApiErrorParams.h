//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class NSString;

@interface OpenApiErrorParams : NSObject
{
    NSString *_errDesc;
    NSString *_bottomBtnDesc;
    CDUnknownBlockType _bottomBtnHandler;
}

@property(copy, nonatomic) CDUnknownBlockType bottomBtnHandler; // @synthesize bottomBtnHandler=_bottomBtnHandler;
@property(copy, nonatomic) NSString *bottomBtnDesc; // @synthesize bottomBtnDesc=_bottomBtnDesc;
@property(copy, nonatomic) NSString *errDesc; // @synthesize errDesc=_errDesc;
- (id)description;

@end
