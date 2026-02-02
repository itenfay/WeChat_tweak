//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WACameraScanCodeParam : NSObject
{
    _Bool _isHideAlbumBtn;
    long long _codeType;
    NSString *_descStr;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isHideAlbumBtn; // @synthesize isHideAlbumBtn=_isHideAlbumBtn;
@property(retain, nonatomic) NSString *descStr; // @synthesize descStr=_descStr;
@property(nonatomic) long long codeType; // @synthesize codeType=_codeType;

@end

