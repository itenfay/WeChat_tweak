//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTMigrationBaseInfo : NSObject
{
    NSString *_sourceTable;
    NSString *_sourceDatabase;
    struct Expression {
        CDUnknownFunctionPointerType *_vptr$SQL;
        struct Identifier *m_syntaxPtr;
        struct shared_ptr<WCDB::StringView> m_description;
        _Bool m_hasDescription;
        struct Expression {
            CDUnknownFunctionPointerType *_vptr$Cloneable;
            char m_firstMember;
            char m_secondMember;
            char m_thirdMember;
            union {
                struct LiteralValue m_literalValue;
                struct BindParameter m_bindParameter;
                struct Column m_column;
                struct RaiseFunction m_raiseFunction;
                struct WindowDef m_windowDef;
                struct StringView m_windowName;
            } ;
            union {
                struct Shadow<WCDB::Syntax::SelectSTMT> m_select;
                struct StringView m_collation;
                struct Schema m_schema;
                struct Filter m_filter;
            } ;
            union {
                struct StringView m_table;
                struct StringView m_function;
            } ;
            struct list<WCDB::Syntax::Expression, std::allocator<WCDB::Syntax::Expression>> expressions;
            CDUnion_45fe4260 ;
            char unaryOperator;
            char binaryOperator;
            _Bool distinct;
            _Bool useWildcard;
            char castType;
            _Bool isNot;
            _Bool escape;
            _Bool hasCase;
            _Bool hasElse;
            char inSwitcher;
        } m_syntax;
        CDUnknownFunctionPointerType *_vptr$ExpressionUnaryOperable;
        CDUnknownFunctionPointerType *_vptr$ExpressionBinaryOperable;
        CDUnknownFunctionPointerType *_vptr$ExpressionInOperable;
        CDUnknownFunctionPointerType *_vptr$ExpressionBetweenOperable;
        CDUnknownFunctionPointerType *_vptr$ExpressionCollateOperable;
        CDUnknownFunctionPointerType *_vptr$CoreFunctionOperable;
        CDUnknownFunctionPointerType *_vptr$AggregateFunctionOperable;
        CDUnknownFunctionPointerType *_vptr$FTSFunctionOperable;
    } _filterCondition;
    NSString *_table;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct Expression filterCondition; // @synthesize filterCondition=_filterCondition;
@property(readonly, nonatomic) NSString *sourceTable; // @synthesize sourceTable=_sourceTable;
@property(readonly, nonatomic) NSString *table; // @synthesize table=_table;
- (id)initWithBaseInfo:(const void *)arg1;

@end

