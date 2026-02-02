//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSXMLParser, WCSVGCanvas, WCSVGGradient, WCSVGStyledPathFactory;

@interface WCSVGParser : NSObject
{
    _Bool _isDefined;
    WCSVGCanvas *_rootCanvas;
    NSXMLParser *_xmlParser;
    WCSVGStyledPathFactory *_pathFactory;
    NSMutableArray *_currentCanvasStack;
    NSMutableDictionary *_maskCanvases;
    unsigned long long _groupLevel;
    NSMutableDictionary *_groupTransforms;
    NSMutableDictionary *_groupAppearances;
    NSMutableDictionary *_gradients;
    WCSVGGradient *_currentGradient;
    struct CGRect _viewBox;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCSVGGradient *currentGradient; // @synthesize currentGradient=_currentGradient;
@property(retain, nonatomic) NSMutableDictionary *gradients; // @synthesize gradients=_gradients;
@property(nonatomic) _Bool isDefined; // @synthesize isDefined=_isDefined;
@property(retain, nonatomic) NSMutableDictionary *groupAppearances; // @synthesize groupAppearances=_groupAppearances;
@property(retain, nonatomic) NSMutableDictionary *groupTransforms; // @synthesize groupTransforms=_groupTransforms;
@property unsigned long long groupLevel; // @synthesize groupLevel=_groupLevel;
@property(retain, nonatomic) NSMutableDictionary *maskCanvases; // @synthesize maskCanvases=_maskCanvases;
@property(retain, nonatomic) NSMutableArray *currentCanvasStack; // @synthesize currentCanvasStack=_currentCanvasStack;
@property(retain, nonatomic) WCSVGStyledPathFactory *pathFactory; // @synthesize pathFactory=_pathFactory;
@property(retain, nonatomic) NSXMLParser *xmlParser; // @synthesize xmlParser=_xmlParser;
@property(retain, nonatomic) WCSVGCanvas *rootCanvas; // @synthesize rootCanvas=_rootCanvas;
@property(nonatomic) struct CGRect viewBox; // @synthesize viewBox=_viewBox;
- (id)gradientFromId:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)currentCanvas;
- (_Bool)parseSVGDocument;
- (id)initWithSVGData:(id)arg1;
- (id)initWithSVGDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

