//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMKPoint, MMKSize;

@interface MMKRect : NSObject
{
    MMKPoint *_origin;
    MMKSize *_size;
}

+ (id)KRectWithOrigin:(id)arg1 size:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) MMKSize *size; // @synthesize size=_size;
@property(readonly, nonatomic) MMKPoint *origin; // @synthesize origin=_origin;
- (id)description;
- (id)initWithOrigin:(id)arg1 size:(id)arg2;

@end

