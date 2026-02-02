//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface AttachementObjectItem : NSObject
{
    SEL _selAction;
    UIImage *_oImage;
    NSString *_nsTitle;
    NSObject *_object;
    _Bool _isNew;
    _Bool _isRedCode;
    unsigned int _attachementID;
    NSString *_nsDesc;
    NSString *_pathKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pathKey; // @synthesize pathKey=_pathKey;
@property(nonatomic) unsigned int attachementID; // @synthesize attachementID=_attachementID;
@property(retain, nonatomic) NSString *nsDesc; // @synthesize nsDesc=_nsDesc;
@property(nonatomic) _Bool isRedCode; // @synthesize isRedCode=_isRedCode;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(retain, nonatomic) NSObject *object; // @synthesize object=_object;
@property(retain, nonatomic) NSString *nsTitle; // @synthesize nsTitle=_nsTitle;
@property(retain, nonatomic) UIImage *oImage; // @synthesize oImage=_oImage;
@property(nonatomic) SEL selAction; // @synthesize selAction=_selAction;

@end

