//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableString, NSString, WNContentStorage;

@interface WNHTMLTagNode : NSObject
{
    WNContentStorage *m_contentStorage;
    NSString *_tagName;
    NSMutableString *_textContent;
    NSMutableArray *_attributes;
    NSDictionary *_tagAttributes;
    WNHTMLTagNode *_parentNode;
    NSMutableArray *_childNodes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *childNodes; // @synthesize childNodes=_childNodes;
@property(nonatomic) __weak WNHTMLTagNode *parentNode; // @synthesize parentNode=_parentNode;
@property(retain, nonatomic) NSDictionary *tagAttributes; // @synthesize tagAttributes=_tagAttributes;
@property(retain, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSMutableString *textContent; // @synthesize textContent=_textContent;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (id)contentStorage;
- (void)addAttribute:(id)arg1;
- (void)addChildNode:(id)arg1;
- (void)dealloc;
- (id)initWithTagName:(id)arg1 parentNode:(id)arg2;

@end

