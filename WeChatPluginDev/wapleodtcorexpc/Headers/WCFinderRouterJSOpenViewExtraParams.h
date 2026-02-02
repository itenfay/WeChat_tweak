//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveFrontEndPreviewView;

@interface WCFinderRouterJSOpenViewExtraParams : NSObject
{
    _Bool _forceIgnoreFinderAuthBlock;
    MMFinderLiveFrontEndPreviewView *_previewView;
    CDUnknownBlockType _popFeedViewCallBack;
    CDUnknownBlockType _feedStopPlayCallBack;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType feedStopPlayCallBack; // @synthesize feedStopPlayCallBack=_feedStopPlayCallBack;
@property(copy, nonatomic) CDUnknownBlockType popFeedViewCallBack; // @synthesize popFeedViewCallBack=_popFeedViewCallBack;
@property(nonatomic) _Bool forceIgnoreFinderAuthBlock; // @synthesize forceIgnoreFinderAuthBlock=_forceIgnoreFinderAuthBlock;
@property(retain, nonatomic) MMFinderLiveFrontEndPreviewView *previewView; // @synthesize previewView=_previewView;

@end

