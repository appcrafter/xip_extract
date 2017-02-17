//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKMutableArchive.h>

@class NSString;

@interface PKFolderArchive : PKMutableArchive
{
    NSString *_archivePath;	// 8 = 0x8
}

- (BOOL)closeArchive;	// IMP=0x000000000000c196
- (BOOL)fileExistsAtPath:(id)arg1;	// IMP=0x000000000000c141
- (BOOL)verifyReturningError:(id *)arg1;	// IMP=0x000000000000c0d7
- (id)fileAttributesAtPath:(id)arg1;	// IMP=0x000000000000c080
- (BOOL)extractItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000bf80
- (id)dataForPath:(id)arg1;	// IMP=0x000000000000bf3b
- (id)enumeratorAtPath:(id)arg1;	// IMP=0x000000000000bee6
- (id)archivePath;	// IMP=0x000000000000bed5
- (void)dealloc;	// IMP=0x000000000000be6e
- (id)initForReadingFromPath:(id)arg1;	// IMP=0x000000000000bda5
- (BOOL)setContentsOfArchive:(id)arg1 forPath:(id)arg2;	// IMP=0x000000000000c453
- (BOOL)setFile:(id)arg1 forPath:(id)arg2 compressed:(BOOL)arg3;	// IMP=0x000000000000c358
- (BOOL)setData:(id)arg1 forPath:(id)arg2 compressed:(BOOL)arg3;	// IMP=0x000000000000c29d
- (id)initForWritingToPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c1a1
- (id)archiveSignatures;	// IMP=0x000000000000c687

@end

