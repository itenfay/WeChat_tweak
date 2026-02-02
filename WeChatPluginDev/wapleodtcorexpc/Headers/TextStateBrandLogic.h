//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TextStateBrandBaseSignature, TextStatePublishSourceInfo, TextStatusBrandInfo;
@protocol TextStateBrandLogicDelegate;

@interface TextStateBrandLogic : NSObject
{
    unsigned int _getA8KeyScene;
    unsigned int _action;
    NSDictionary *_attachInfo;
    id <TextStateBrandLogicDelegate> _delegate;
    NSString *_URLString;
    TextStateBrandBaseSignature *_signature;
    TextStatusBrandInfo *_brandInfo;
    TextStatePublishSourceInfo *_sourceInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextStatePublishSourceInfo *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(nonatomic) unsigned int action; // @synthesize action=_action;
@property(retain, nonatomic) TextStatusBrandInfo *brandInfo; // @synthesize brandInfo=_brandInfo;
@property(retain, nonatomic) TextStateBrandBaseSignature *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(nonatomic) __weak id <TextStateBrandLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *attachInfo; // @synthesize attachInfo=_attachInfo;
@property(nonatomic) unsigned int getA8KeyScene; // @synthesize getA8KeyScene=_getA8KeyScene;
- (void)onNoActionAvailableWithViewController:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)onOpenWebWithURL:(id)arg1 viewController:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)publishTextStateFromViewController:(id)arg1;
- (void)getSourceInfoFromExtInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performActionWithViewController:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)exchangeBrandInfoWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithSignature:(id)arg1;
- (id)initWithURLString:(id)arg1;

@end

