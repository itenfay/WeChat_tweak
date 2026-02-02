//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WXGameWidgetNode : NSObject
{
    unsigned long long _dynamicSizeStyle;
    NSString *_viewClassName;
    NSString *_nodeId;
    NSString *_onClick;
    NSArray *_layouts;
    NSArray *_viewAttrs;
    NSArray *_childNodes;
}

+ (id)buildNodeWithXmlElement:(struct XmlReaderNode_t *)arg1;
+ (id)loadNodeWithXMLFile:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *childNodes; // @synthesize childNodes=_childNodes;
@property(retain, nonatomic) NSArray *viewAttrs; // @synthesize viewAttrs=_viewAttrs;
@property(retain, nonatomic) NSArray *layouts; // @synthesize layouts=_layouts;
@property(copy, nonatomic) NSString *onClick; // @synthesize onClick=_onClick;
@property(copy, nonatomic) NSString *nodeId; // @synthesize nodeId=_nodeId;
@property(copy, nonatomic) NSString *viewClassName; // @synthesize viewClassName=_viewClassName;
@property(nonatomic) unsigned long long dynamicSizeStyle; // @synthesize dynamicSizeStyle=_dynamicSizeStyle;
- (id)buildViewTreeWithBaseView:(id)arg1;

@end

