//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSMutableString, NSString;

@interface XMLReader : NSObject
{
    NSMutableArray *_dictionaryStack;
    NSMutableString *_textInProgress;
    NSError *_errorPointer;
}

+ (id)dictionaryForXMLString:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)dictionaryForXMLData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)dictionaryForXMLString:(id)arg1 error:(id *)arg2;
+ (id)dictionaryForXMLData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *errorPointer; // @synthesize errorPointer=_errorPointer;
@property(retain, nonatomic) NSMutableString *textInProgress; // @synthesize textInProgress=_textInProgress;
@property(retain, nonatomic) NSMutableArray *dictionaryStack; // @synthesize dictionaryStack=_dictionaryStack;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)objectWithData:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

