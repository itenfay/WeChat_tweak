//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFlutterOffsetInfo : NSObject
{
    _Bool _inScreen;
    struct CGPoint _offset;
}

@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool inScreen; // @synthesize inScreen=_inScreen;
- (id)initWithOffset:(struct CGPoint)arg1;
- (id)initWithInScreen:(_Bool)arg1;

@end

