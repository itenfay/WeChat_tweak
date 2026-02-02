//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCMomentsPageContext;

@interface WCImageFullScreenParams : NSObject
{
    _Bool _bNeedEdit;
    _Bool _bFrom3DTouch;
    _Bool _bForbidLongPress;
    _Bool _bSilencePlayLivePhotos;
    unsigned int _index;
    NSArray *_mediaDataArr;
    NSArray *_originViewArr;
    unsigned long long _contentItemScene;
    WCMomentsPageContext *_pageContext;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bSilencePlayLivePhotos; // @synthesize bSilencePlayLivePhotos=_bSilencePlayLivePhotos;
@property(nonatomic) _Bool bForbidLongPress; // @synthesize bForbidLongPress=_bForbidLongPress;
@property(nonatomic) _Bool bFrom3DTouch; // @synthesize bFrom3DTouch=_bFrom3DTouch;
@property(nonatomic) _Bool bNeedEdit; // @synthesize bNeedEdit=_bNeedEdit;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(retain, nonatomic) WCMomentsPageContext *pageContext; // @synthesize pageContext=_pageContext;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(retain, nonatomic) NSArray *originViewArr; // @synthesize originViewArr=_originViewArr;
@property(retain, nonatomic) NSArray *mediaDataArr; // @synthesize mediaDataArr=_mediaDataArr;
- (id)initWithMediaDataArr:(id)arg1 originViewArr:(id)arg2 contentItemScene:(unsigned long long)arg3;

@end

