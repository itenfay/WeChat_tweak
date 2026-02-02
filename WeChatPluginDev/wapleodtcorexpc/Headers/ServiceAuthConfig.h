//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor;

@interface ServiceAuthConfig : NSObject
{
    unsigned int _scene;
    NSArray *_authServices;
    NSArray *_noAuthServices;
    NSString *_title;
    NSString *_content;
    NSString *_loadingRequestSuccessText;
    NSArray *_contentArgs;
    NSString *_titleForCancelBtn;
    UIColor *_titleColorForCancelBtn;
    NSString *_titleForConfirmBtn;
    UIColor *_colorForConfirmBtn;
    id _attachInfo;
    CDUnknownBlockType _resultBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) id attachInfo; // @synthesize attachInfo=_attachInfo;
@property(retain, nonatomic) UIColor *colorForConfirmBtn; // @synthesize colorForConfirmBtn=_colorForConfirmBtn;
@property(retain, nonatomic) NSString *titleForConfirmBtn; // @synthesize titleForConfirmBtn=_titleForConfirmBtn;
@property(retain, nonatomic) UIColor *titleColorForCancelBtn; // @synthesize titleColorForCancelBtn=_titleColorForCancelBtn;
@property(retain, nonatomic) NSString *titleForCancelBtn; // @synthesize titleForCancelBtn=_titleForCancelBtn;
@property(retain, nonatomic) NSArray *contentArgs; // @synthesize contentArgs=_contentArgs;
@property(retain, nonatomic) NSString *loadingRequestSuccessText; // @synthesize loadingRequestSuccessText=_loadingRequestSuccessText;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSArray *noAuthServices; // @synthesize noAuthServices=_noAuthServices;
@property(copy, nonatomic) NSArray *authServices; // @synthesize authServices=_authServices;
- (void)updateIfNeed;
- (id)initForCloseStyle;
- (id)initForOpenStyle;
- (id)init;

@end

