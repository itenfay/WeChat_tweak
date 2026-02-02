//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ScanQRCodeDataUsedInMultiCode : NSObject
{
    _Bool _isClipImage;
    CDUnknownBlockType _block;
    struct CGPoint _contentOffset;
    struct CGPoint _normalLongPressPoint;
    struct CGRect _curRelatedRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint normalLongPressPoint; // @synthesize normalLongPressPoint=_normalLongPressPoint;
@property(nonatomic) _Bool isClipImage; // @synthesize isClipImage=_isClipImage;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) struct CGRect curRelatedRect; // @synthesize curRelatedRect=_curRelatedRect;

@end

